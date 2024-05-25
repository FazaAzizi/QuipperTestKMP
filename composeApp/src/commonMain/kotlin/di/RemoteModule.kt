package di

import data.lib.setupHttpClient
import data.lib.setupJson
import data.lib.setupKermit
import getPlatform
import io.ktor.http.URLProtocol
import kotlinx.serialization.ExperimentalSerializationApi
import org.koin.core.qualifier.named
import org.koin.dsl.module

const val BASE_URL = "base_url"
const val NETWORK_CLIENT = "shared_network_client"
const val NETWORK_CLIENT_MULTIPART = "shared_network_client_multipart"

@OptIn(ExperimentalSerializationApi::class)
val remoteModule = module {
    single { setupJson() }

    single { setupKermit() }

    single(named(NETWORK_CLIENT)) {
        setupHttpClient(
            json = get(),
            baseUrl = "quipper.github.io",
            urlProtocol = URLProtocol.HTTPS,
            kermitLogger = get(),
            isDebugMode = getPlatform().isDebugMode(),
            httpClientProvider = getPlatform().getHttpClientEngine()
        )
    }

    single(named(NETWORK_CLIENT_MULTIPART)) {
        setupHttpClient(
            json = get(),
            baseUrl = get(named(BASE_URL)),
            urlProtocol = URLProtocol.HTTPS,
            kermitLogger = get(),
            isDebugMode = getPlatform().isDebugMode(),
            httpClientProvider = getPlatform().getHttpClientEngine(true)
        )
    }
}