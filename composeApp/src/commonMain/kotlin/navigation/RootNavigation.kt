package navigation

import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.pop
import com.arkivanov.decompose.router.stack.push
import com.arkivanov.decompose.router.stack.replaceAll
import com.arkivanov.decompose.router.stack.replaceCurrent
import kotlinx.serialization.Serializable

class RootNavigation(
    context: ComponentContext
): ComponentContext by context {
    private val navigation = StackNavigation<Configuration>()

    val childStack = childStack(
        source = navigation,
        serializer = Configuration.serializer(),
        initialConfiguration = Configuration.CourseList,
        handleBackButton = true,
        childFactory = ::createChild
    )

    private fun createChild(
        config: Configuration,
        context: ComponentContext,
    ): Child {

        return when (config) {
            Configuration.CourseList -> {
                Child.CourseList(
                    CourseListNavigation (
                        context = context,
                        onClickData =  {

                        }
                    )
                )
            }
        }
    }

    sealed class Child {
        data class CourseList(val component: CourseListRoute) : Child()
    }

    @Serializable
    sealed class Configuration {
        @Serializable
        data object CourseList : Configuration()
    }
}