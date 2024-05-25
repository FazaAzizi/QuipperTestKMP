import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import io.ktor.client.HttpClient

interface Platform {
    val name: String
    fun getHttpClientEngine(forMultipartData: Boolean = false): HttpClient

    fun isDebugMode(): Boolean

    fun getRequestHash(): String
}

expect fun getPlatform(): Platform

@Composable
expect fun VideoPlayer(modifier: Modifier, url: String)