package utils.Component

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.background
import androidx.compose.foundation.border
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.material.Icon
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.focus.onFocusChanged
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.Placeholder
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import org.jetbrains.compose.resources.Font
import org.jetbrains.compose.resources.painterResource
import quippertestkmp.composeapp.generated.resources.Res
import quippertestkmp.composeapp.generated.resources.ic_arrow_back
import quippertestkmp.composeapp.generated.resources.ic_search
import utils.dark01
import utils.gray100
import utils.gray400


@Composable
fun SearchComponent(
    placeholder: String,
    onValueChange: ((text: String) -> Unit)
) {
    var textValue by remember { mutableStateOf("") }

    BasicTextField(
        modifier = Modifier.fillMaxWidth()
            .height(60.dp)
            .padding(vertical = 5.dp)
            .background(
                color = Color.White, shape = RoundedCornerShape(size = 25.dp)
            )
            .border(
                border = BorderStroke(
                    1.dp, color = gray100
                ),
                shape = RoundedCornerShape(size = 25.dp)
            ),
        textStyle = TextStyle(
            fontSize = 16.sp,
            lineHeight = 22.sp,
            fontWeight = FontWeight.W400,
            color = dark01,
        ),
        value = textValue, onValueChange = { newText ->
            textValue = newText
            onValueChange(newText)
        },
        decorationBox = { innerTextField ->
            Row(
                modifier = Modifier.padding(horizontal = 8.dp),
                verticalAlignment = Alignment.CenterVertically
            ) {
                Icon(
                    modifier = Modifier.size(24.dp),
                    painter = painterResource(Res.drawable.ic_search),
                    contentDescription = "icon search"
                )
                Spacer(Modifier.width(5.dp))
                Box(
                    Modifier.weight(1f)
                ) {
                    if (textValue.isEmpty()) {
                        Text(
                            text = placeholder, style = TextStyle(
                                fontSize = 16.sp,
                                lineHeight = 22.sp,
                                fontWeight = FontWeight.W400,
                                color = gray400
                            )
                        )
                    }
                    innerTextField()
                }
            }
        }, singleLine = true
    )

}