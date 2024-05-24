package navigation

import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.pop
import com.arkivanov.decompose.router.stack.push
import domain.CourseEntity
import kotlinx.serialization.Serializable
import navigation.course_detail.CourseDetailNavigation
import navigation.course_detail.CourseDetailRoute
import navigation.course_list.CourseListNavigation
import navigation.course_list.CourseListRoute

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
                            navigation.push(Configuration.CourseDetail(it))
                        }
                    )
                )
            }

            is Configuration.CourseDetail -> {
                val data = config.data
                Child.CourseDetail(
                    component = CourseDetailNavigation(
                        context = context,
                        onClickBack = {
                            navigation.pop()
                        }
                    ),
                    data = data
                )
            }
        }
    }

    sealed class Child {
        data class CourseList(val component: CourseListRoute) : Child()
        data class CourseDetail(val component: CourseDetailRoute, val data: CourseEntity) :
            Child()
    }

    @Serializable
    sealed class Configuration {
        @Serializable
        data object CourseList : Configuration()

        @Serializable
        data class CourseDetail(
            val data: CourseEntity
        ) : Configuration()
    }
}