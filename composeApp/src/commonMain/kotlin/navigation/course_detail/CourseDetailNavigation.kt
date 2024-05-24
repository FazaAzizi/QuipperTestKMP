package navigation.course_detail

import com.arkivanov.decompose.ComponentContext
import domain.CourseEntity

interface CourseDetailRoute {
    fun goToList()
}

class CourseDetailNavigation(
    context: ComponentContext,
    private val onClickBack: (() -> Unit),
) : CourseDetailRoute, ComponentContext by context {

    override fun goToList() {
        onClickBack()
    }
}