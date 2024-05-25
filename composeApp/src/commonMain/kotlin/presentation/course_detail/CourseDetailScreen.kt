package presentation.course_detail

import VideoPlayer
import androidx.compose.foundation.Image
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.aspectRatio
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.material.Scaffold
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.seiko.imageloader.rememberImagePainter
import domain.CourseEntity
import navigation.course_detail.CourseDetailRoute
import org.jetbrains.compose.resources.painterResource
import quippertestkmp.composeapp.generated.resources.Res
import quippertestkmp.composeapp.generated.resources.ic_arrow_back
import utils.dark01

@Composable
fun CourseDetailScreen(
    route: CourseDetailRoute,
    data: CourseEntity
) {
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
                    Image(
                        modifier = Modifier.size(24.dp)
                            .clickable {
                                route.goToList()
                            },
                        painter = painterResource(Res.drawable.ic_arrow_back),
                        contentDescription = null
                    )

                    Spacer(Modifier.width(10.dp))
                    Text(
                        modifier = Modifier.fillMaxWidth()
                            .weight(1f),
                        textAlign = TextAlign.Left,
                        text = data.title,
                        fontSize = 24.sp,
                        color = dark01
                    )

                }

            }
        },
        content = {
            Column(
                modifier = Modifier.fillMaxSize(),
                verticalArrangement = Arrangement.Top,
                horizontalAlignment = Alignment.CenterHorizontally
            ) {

                VideoPlayer(
                    modifier = Modifier.fillMaxWidth()
                        .aspectRatio(16f / 9f),
                    url = data.videoURL
                )

                Spacer(modifier = Modifier.height(20.dp))

                Row(
                    modifier = Modifier.fillMaxWidth()
                        .height(120.dp)
                        .padding(vertical = 10.dp, horizontal = 20.dp),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                    Image(
                        painter = rememberImagePainter(data.thumbnailURL),
                        contentDescription = null,
                        contentScale = ContentScale.Crop,
                        modifier = Modifier
                            .width(160.dp)
                            .aspectRatio(16f / 9f)
                    )

                    Spacer(modifier = Modifier.width(16.dp))

                    Column(
                        verticalArrangement = Arrangement.Top,
                        modifier = Modifier.fillMaxHeight()
                    ) {
                        Text(
                            text = data.presenterName,
                            fontSize = 18.sp,
                            color = dark01
                        )

                        Spacer(modifier = Modifier.height(4.dp))
                        Text(
                            text = "Duration : ${formatDuration(data.videoDuration)}",
                            fontSize = 14.sp,
                            color = dark01
                        )
                    }
                }

                Spacer(modifier = Modifier.height(20.dp))

                Text(
                    modifier = Modifier.fillMaxWidth()
                        .padding(horizontal = 20.dp),
                    textAlign = TextAlign.Left,
                    text = data.description,
                    fontSize = 14.sp,
                    color = dark01
                )
            }
        }
    )
}

fun formatDuration(durationMs: Long): String {
    val totalSeconds = durationMs / 1000
    val minutes = totalSeconds / 60
    val seconds = totalSeconds % 60
    return "${minutes} minute ${seconds} seconds"
}