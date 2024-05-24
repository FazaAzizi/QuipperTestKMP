package app

import Greeting
import androidx.compose.animation.AnimatedVisibility
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material.Button
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import com.arkivanov.decompose.extensions.compose.jetbrains.stack.Children
import com.arkivanov.decompose.extensions.compose.jetbrains.stack.animation.slide
import com.arkivanov.decompose.extensions.compose.jetbrains.stack.animation.stackAnimation
import com.arkivanov.decompose.extensions.compose.jetbrains.subscribeAsState
import navigation.RootNavigation
import org.jetbrains.compose.resources.painterResource
import org.jetbrains.compose.ui.tooling.preview.Preview
import presentation.CourseDetailScreen
import presentation.CourseListScreen

import quippertestkmp.composeapp.generated.resources.Res
import quippertestkmp.composeapp.generated.resources.compose_multiplatform

@Composable
@Preview
fun App(root: RootNavigation) {
    MaterialTheme {

        val childStack by root.childStack.subscribeAsState()
        Children(
            stack = childStack,
            animation = stackAnimation(slide())
        ) { child ->
            when(val instance = child.instance) {
                is RootNavigation.Child.CourseList -> {
                    CourseListScreen(route = instance.component)
                }
                is RootNavigation.Child.CourseDetail -> {
                    CourseDetailScreen(
                        route = instance.component,
                        data = instance.data
                    )
                }
            }
        }
    }
}