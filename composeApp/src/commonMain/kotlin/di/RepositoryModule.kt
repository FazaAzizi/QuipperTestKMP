package di

import data.remote.NetworkRepository
import org.koin.core.qualifier.named
import org.koin.dsl.module

val networkModule = module {
    single<NetworkRepository> { NetworkRepository(get(named(NETWORK_CLIENT))) }
}