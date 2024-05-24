package utils

import androidx.compose.ui.graphics.Color

fun String.toColor(): Color {
    require(startsWith("#") && (length == 7 || length == 9)) { "Invalid hex color format" }
    val colorInt = substring(1).toLong(16)
    return if (length == 7) {
        Color(
            red = (colorInt shr 16 and 0xFF) / 255f,
            green = (colorInt shr 8 and 0xFF) / 255f,
            blue = (colorInt and 0xFF) / 255f
        )
    } else {
        Color(
            red = (colorInt shr 16 and 0xFF) / 255f,
            green = (colorInt shr 8 and 0xFF) / 255f,
            blue = (colorInt and 0xFF) / 255f,
            alpha = (colorInt shr 24 and 0xFF) / 255f
        )
    }
}

val dark01 = "#22232A".toColor()
val dark02 = "#424349".toColor()
val dark03 = "#6E6E74".toColor()
val dark04 = "#AFAFB4".toColor()
val dark05 = "#E4E4EB".toColor()
val dark06 = "#F3F3F7".toColor()

val grayCustom = "#475467".toColor()
val gray25 = "#FCFCFD".toColor()
val gray50 = "#F8FAFC".toColor()
val gray100 = "#EEF2F6".toColor()
val gray200 = "#E3E8EF".toColor()
val gray300 = "#BFC7D1".toColor()
val gray400 = "#9AA4B2".toColor()
val gray500 = "#697586".toColor()
val gray600 = "#475467".toColor()
val gray700 = "#364152".toColor()