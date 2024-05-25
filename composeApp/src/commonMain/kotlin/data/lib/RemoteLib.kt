package data.lib

import io.ktor.client.HttpClient
import io.ktor.client.plugins.HttpTimeout
import io.ktor.client.plugins.cookies.AcceptAllCookiesStorage
import io.ktor.client.plugins.cookies.HttpCookies
import io.ktor.client.plugins.defaultRequest
import io.ktor.http.ContentType
import io.ktor.http.URLProtocol
import kotlinx.serialization.ExperimentalSerializationApi
import kotlinx.serialization.json.Json
import co.touchlab.kermit.Logger
import co.touchlab.kermit.LoggerConfig
import io.ktor.client.plugins.contentnegotiation.ContentNegotiation
import io.ktor.client.plugins.logging.LogLevel
import io.ktor.client.plugins.logging.Logging
import io.ktor.http.HttpHeaders.ContentEncoding
import io.ktor.serialization.kotlinx.json.json

fun setupKermit(): Logger {
    return Logger(config = LoggerConfig.default)
}

//for json serialization
@ExperimentalSerializationApi
fun setupJson() = Json {
    isLenient = true
    ignoreUnknownKeys = true
    useAlternativeNames = false
    explicitNulls = false
}

@ExperimentalSerializationApi
fun setupHttpClient(
    json: Json,
    baseUrl: String,
    urlProtocol: URLProtocol,
    kermitLogger: Logger,
    isDebugMode: Boolean = true,
    httpClientProvider: HttpClient
): HttpClient {
    return httpClientProvider.config {
        ContentEncoding
        expectSuccess = true

        install(ContentNegotiation) {
            json(json = Json { ignoreUnknownKeys = true }, contentType = ContentType.Any)
        }

        defaultRequest {
            host = baseUrl
            url {
                this.user
                protocol = urlProtocol
            }
        }

        install(HttpTimeout) {
            this.requestTimeoutMillis = 600000
            this.connectTimeoutMillis = 600000
            this.socketTimeoutMillis = 600000
        }

        install(HttpCookies) {
            storage = AcceptAllCookiesStorage()
        }

        if (isDebugMode) {
            install(Logging) {
                logger = CustomLogger(kermitLogger)
                level = LogLevel.ALL
            }
        }
    }
}

class CustomLogger(private val log: Logger) : io.ktor.client.plugins.logging.Logger {
    override fun log(message: String) {
        return log.withTag("TAG").d(message)
    }
}