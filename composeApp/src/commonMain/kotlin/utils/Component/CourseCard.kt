package utils.Component

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.Image
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Card
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.layout.ContentScale
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.seiko.imageloader.rememberImagePainter
import domain.CourseEntity
import org.jetbrains.compose.resources.painterResource
import quippertestkmp.composeapp.generated.resources.Res
import quippertestkmp.composeapp.generated.resources.compose_multiplatform
import utils.dark01
import utils.gray100

@Composable
fun CourseCard(
    data: CourseEntity,
    onClick: () -> Unit
) {
    Card(
        modifier = Modifier
            .fillMaxWidth()
            .height(120.dp)
            .clickable { onClick() },
        shape = RoundedCornerShape(8.dp),
        border = BorderStroke(1.dp, gray100),
    ) {
        Row(
            modifier = Modifier.fillMaxWidth()
                .fillMaxHeight()
                .padding(vertical =  10.dp, horizontal = 20.dp),
            verticalAlignment = Alignment.CenterVertically
            ) {
            Image(
                painter = rememberImagePainter(data.thumbnailURL),
                contentDescription = null,
                contentScale = ContentScale.Crop,
                modifier = Modifier
                    .width(160.dp)
                    .height(90.dp)
            )
            Spacer(modifier = Modifier.width(16.dp))
            Column(
                verticalArrangement = Arrangement.Top,
                modifier = Modifier.fillMaxHeight()
            ) {
                Text(
                    text = data.title,
                    fontSize = 18.sp,
                    color = dark01
                )

                Spacer(modifier = Modifier.height(4.dp))
                Text(
                    text = data.presenterName,
                    fontSize = 14.sp,
                    color = dark01
                )
            }
        }
    }
}