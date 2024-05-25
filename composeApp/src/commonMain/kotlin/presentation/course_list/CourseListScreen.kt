package presentation.course_list

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.Scaffold
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import domain.CourseEntity
import domain.dummyCourseList
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import navigation.course_list.CourseListRoute
import org.koin.compose.koinInject
import utils.Component.CourseCard
import utils.Component.SearchComponent
import utils.dark01

@Composable
fun CourseListScreen(
    route: CourseListRoute,
    ) {

    var data by remember { mutableStateOf<List<CourseEntity>>(emptyList()) }

    var filteredData by remember { mutableStateOf(data) }
    val scope = rememberCoroutineScope()
    val viewModel = koinInject<CourseListViewModel>()

    val loginState by viewModel.courseListViewState.collectAsState()
    when (val state = loginState) {
        is CourseListViewModel.CourseListScreenState.Error -> {
            println("===ERROR===")
        }

        is CourseListViewModel.CourseListScreenState.Loading -> {
            println("===LOADING===")
        }

        is CourseListViewModel.CourseListScreenState.Success -> {
            println("===SUCCESS===")
            val response = state.responseData
            data = response
            filteredData = response
        }
    }

    LaunchedEffect(Unit) {
        scope.launch {
            viewModel.course()
        }
    }

    Scaffold(
        topBar = {
            Box(
                modifier = Modifier.fillMaxWidth()
                    .height(60.dp)
                    .background(color = Color.White)
            ) {
                Row(
                    modifier = Modifier.fillMaxWidth()
                        .fillMaxHeight()
                        .padding(horizontal = 20.dp),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Text(
                        modifier = Modifier.fillMaxWidth(),
                        textAlign = TextAlign.Center,
                        text = "Course List",
                        fontSize = 24.sp,
                        color = dark01
                    )

                }

            }
        },

        content = {
            Column(
                modifier = Modifier.fillMaxSize()
                    .padding(horizontal = 20.dp)
                    .verticalScroll(rememberScrollState())
            ) {
                Spacer(Modifier.height(20.dp))
                SearchComponent(
                    placeholder = "Search Title or Presenter Name...",
                    onValueChange = { text ->
                        filteredData = if (text.isEmpty()) {
                            data
                        } else {
                            data.filter { course ->
                                course.title.lowercase().contains(text.lowercase()) ||
                                        course.presenterName.lowercase().contains(text.lowercase())
                            }
                        }
                    }
                )
                Spacer(Modifier.height(10.dp))
                filteredData.forEach { course ->
                    CourseCard(
                        course,
                        onClick = {
                            route.goToDetail(course)
                        }
                    )
                    Spacer(Modifier.height(10.dp))
                }
            }
        }
    )
}