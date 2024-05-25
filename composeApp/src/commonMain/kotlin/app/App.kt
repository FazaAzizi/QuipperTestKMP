package app

import androidx.compose.material.MaterialTheme
import androidx.compose.runtime.*
import com.arkivanov.decompose.extensions.compose.jetbrains.stack.Children
import com.arkivanov.decompose.extensions.compose.jetbrains.stack.animation.slide
import com.arkivanov.decompose.extensions.compose.jetbrains.stack.animation.stackAnimation
import com.arkivanov.decompose.extensions.compose.jetbrains.subscribeAsState
import navigation.RootNavigation
import org.jetbrains.compose.ui.tooling.preview.Preview
import presentation.course_detail.CourseDetailScreen
import presentation.course_list.CourseListScreen

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