import androidx.compose.runtime.Composable
import androidx.compose.runtime.remember
import androidx.compose.ui.Modifier
import androidx.compose.ui.interop.UIKitView
import io.ktor.client.HttpClient
import io.ktor.client.engine.darwin.Darwin
import kotlinx.cinterop.CValue
import kotlinx.cinterop.ExperimentalForeignApi
import kotlinx.cinterop.refTo
import platform.AVFoundation.AVPlayer
import platform.AVFoundation.play
import platform.AVKit.AVPlayerViewController
import platform.CoreGraphics.CGRect
import platform.Foundation.NSURL
import platform.UIKit.UIDevice
import platform.UIKit.UIView
import platform.AVFoundation.AVPlayerLayer
import platform.CoreCrypto.CCHmac
import platform.CoreCrypto.CCHmacAlgorithm
import platform.CoreCrypto.CC_SHA256_DIGEST_LENGTH
import platform.CoreCrypto.kCCHmacAlgSHA256
import platform.Foundation.NSDate
import platform.Foundation.NSString
import platform.Foundation.NSUTF8StringEncoding
import platform.Foundation.cStringUsingEncoding
import platform.Foundation.lengthOfBytesUsingEncoding
import platform.Foundation.stringWithFormat
import platform.Foundation.timeIntervalSince1970
import platform.QuartzCore.CATransaction
import platform.QuartzCore.kCATransactionDisableActions


class IOSPlatform: Platform {
    override val name: String = UIDevice.currentDevice.systemName() + " " + UIDevice.currentDevice.systemVersion
    override fun getHttpClientEngine(forMultipartData: Boolean): HttpClient {
        return HttpClient(Darwin) {
            engine {
                configureRequest {
                    setAllowsCellularAccess(true)
                }
            }
        }
    }

    override fun isDebugMode(): Boolean {
        return true
    }

    override fun getRequestHash(): String {
        val key = "Compose Base"
        val timestamp = NSDate().timeIntervalSince1970.toLong().toString()
        val hash = (timestamp as NSString).sha256Hmac(key = key)
        return hash
    }
}

@OptIn(ExperimentalForeignApi::class)
fun NSString.sha256Hmac(algorithm: CCHmacAlgorithm = kCCHmacAlgSHA256, key: String): String {
    val string = this.cStringUsingEncoding(encoding = NSUTF8StringEncoding)
    val stringLength = this.lengthOfBytesUsingEncoding(NSUTF8StringEncoding)
    val digestLength = CC_SHA256_DIGEST_LENGTH
    var result = UByteArray(size = digestLength)
    val keyString = (key as NSString).cStringUsingEncoding(encoding = NSUTF8StringEncoding)
    val keyLength = key.lengthOfBytesUsingEncoding(NSUTF8StringEncoding)

    CCHmac(algorithm, keyString, keyLength, string, stringLength, result.refTo(0))

    return stringFromResult(result, digestLength)
}

@OptIn(ExperimentalUnsignedTypes::class)
fun stringFromResult(result: UByteArray, length: Int): String {
    val hash = StringBuilder()
    for (index in 0 until length) {
        hash.append(NSString.stringWithFormat("%02x", result[index]))
    }
    return hash.toString()
}

actual fun getPlatform(): Platform = IOSPlatform()

@OptIn(ExperimentalForeignApi::class)
@Composable
actual fun VideoPlayer(modifier: Modifier, url: String) {
    val player = remember { AVPlayer(uRL = NSURL.URLWithString(url)!!) }
    val playerLayer = remember { AVPlayerLayer() }
    val avPlayerViewController = remember { AVPlayerViewController() }
    avPlayerViewController.player = player
    avPlayerViewController.showsPlaybackControls = true

    playerLayer.player = player
    UIKitView(
        factory = {
            val playerContainer = UIView()
            playerContainer.addSubview(avPlayerViewController.view)
            playerContainer
        },
        onResize = { view: UIView, rect: CValue<CGRect> ->
            CATransaction.begin()
            CATransaction.setValue(true, kCATransactionDisableActions)
            view.layer.setFrame(rect)
            playerLayer.setFrame(rect)
            avPlayerViewController.view.layer.frame = rect
            CATransaction.commit()
        },
        update = { view ->
            player.play()
            avPlayerViewController.player!!.play()
        },
        modifier = modifier)
}