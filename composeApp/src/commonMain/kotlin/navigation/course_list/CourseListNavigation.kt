package navigation.course_list

import com.arkivanov.decompose.ComponentContext
import domain.CourseEntity

interface CourseListRoute {
    fun goToDetail(data: CourseEntity)
}

class CourseListNavigation(
    context: ComponentContext,
    private val onClickData: ((data: CourseEntity) -> Unit),
) : CourseListRoute, ComponentContext by context {

    override fun goToDetail(data: CourseEntity) {
        onClickData(data)
    }
}