package com.faza.quippertestkmp

import android.app.Application
import di.sharedKoinModules
import org.koin.android.ext.koin.androidContext
import org.koin.core.context.startKoin

class BaseApp : Application() {
    override fun onCreate() {
        super.onCreate()

        val modules = sharedKoinModules
        startKoin {
            androidContext(this@BaseApp)
            modules(modules)
        }
    }
}