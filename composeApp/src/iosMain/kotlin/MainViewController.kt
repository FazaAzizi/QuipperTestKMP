import androidx.compose.runtime.remember
import androidx.compose.ui.window.ComposeUIViewController
import app.App
import com.arkivanov.decompose.DefaultComponentContext
import com.arkivanov.essenty.lifecycle.LifecycleRegistry
import navigation.RootNavigation

fun MainViewController() = ComposeUIViewController {
    val root = remember {
        RootNavigation(DefaultComponentContext(LifecycleRegistry()))
    }
    App(root)
}