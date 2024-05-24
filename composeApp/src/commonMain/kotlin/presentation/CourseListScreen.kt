package presentation

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material.Scaffold
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.shadow
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import domain.dummyCourseList
import navigation.CourseListNavigation
import navigation.CourseListRoute
import org.jetbrains.compose.resources.Font
import utils.Component.CourseCard
import utils.dark01

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
                    CourseCard(course)
                    Spacer(Modifier.height(5.dp))
                }
            }
        }
    )
}