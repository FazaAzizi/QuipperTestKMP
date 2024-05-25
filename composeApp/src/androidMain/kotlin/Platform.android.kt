import android.content.Context
import android.os.Build
import android.widget.MediaController
import android.widget.VideoView
import androidx.compose.runtime.Composable
import com.chuckerteam.chucker.api.ChuckerInterceptor
import androidx.compose.ui.Modifier
import androidx.compose.ui.viewinterop.AndroidView
import io.ktor.client.HttpClient
import io.ktor.client.engine.cio.CIO
import io.ktor.client.engine.okhttp.OkHttp
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import java.nio.charset.Charset
import javax.crypto.Mac
import javax.crypto.spec.SecretKeySpec

class AndroidPlatform : Platform, KoinComponent {
    private val context: Context by inject()
    override val name: String = "Android ${Build.VERSION.SDK_INT}"

    override fun getHttpClientEngine(forMultipartData: Boolean): HttpClient {
        return if (forMultipartData) HttpClient(CIO) else HttpClient(OkHttp) {
            engine {
                config {
                    retryOnConnectionFailure(true)
                    followRedirects(true)
                }
                if (isDebugMode()) {
                    addInterceptor(ChuckerInterceptor.Builder(context).build())
                }
            }
        }
    }

    override fun isDebugMode(): Boolean {
        return true
    }

    override fun getRequestHash(): String {
        val key: String = "Compose Base"
        val timestamp = (System.currentTimeMillis() / 1000).toString()
        val algorithm: String = "HmacSHA256"
        val charset: Charset = Charset.forName("UTF-8")

        val sha256Hmac: Mac = Mac.getInstance(algorithm)
        val secretKeySpec = SecretKeySpec(key.toByteArray(charset), algorithm)
        sha256Hmac.init(secretKeySpec)
        val hash: String = bytesToHex(sha256Hmac.doFinal(timestamp.toByteArray(charset))).orEmpty()
        return hash
    }

    private fun bytesToHex(bytes: ByteArray): String? {
        val sb = StringBuilder()
        for (b in bytes) {
            sb.append(String.format("%02x", b))
        }
        return sb.toString()
    }
}

actual fun getPlatform(): Platform = AndroidPlatform()

@Composable
actual fun VideoPlayer(modifier: Modifier, url: String){
    AndroidView(
        modifier = modifier,
        factory = { context ->
            VideoView(context).apply {
                setVideoPath(url)
                val mediaController = MediaController(context)
                mediaController.setAnchorView(this)
                setMediaController(mediaController)
                start()
            }
        },
        update = {})
}