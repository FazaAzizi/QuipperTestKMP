package presentation

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.material.Scaffold
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import domain.dummyCourseList
import navigation.course_list.CourseListRoute
import utils.Component.CourseCard

@Composable
fun CourseListScreen(
    route: CourseListRoute,
    ) {
    val data = dummyCourseList

    Scaffold(
        content = {
            Column(
                modifier = Modifier.fillMaxSize()
                    .padding(horizontal = 20.dp)
            ) {
                Spacer(Modifier.height(20.dp))
                data.forEach { course ->
                    Spacer(Modifier.height(5.dp))
                    CourseCard(
                        course,
                        onClick = {
                            route.goToDetail(course)
                        }
                    )
                    Spacer(Modifier.height(5.dp))
                }
            }
        }
    )
}