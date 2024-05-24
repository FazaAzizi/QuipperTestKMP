package domain

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class CourseEntity (
    val title: String,

    @SerialName("presenter_name")
    val presenterName: String,

    val description: String,

    @SerialName("thumbnail_url")
    val thumbnailURL: String,

    @SerialName("video_url")
    val videoURL: String,

    @SerialName("video_duration")
    val videoDuration: Long
)

val dummyCourseList = listOf(
    CourseEntity(
        title = "G12 Chemistry",
        presenterName = "Kaoru Sakata",
        description = "90 seconds exercise for Chemistry",
        thumbnailURL = "https://quipper.github.io/native-technical-exam/images/sakata.jpg",
        videoURL = "https://quipper.github.io/native-technical-exam/videos/sakata.mp4",
        videoDuration = 97000
    ),
    CourseEntity(
        title = "G12 Japanese Classics",
        presenterName = "Rina Okamoto",
        description = "90 seconds exercise for Japanese Classics",
        thumbnailURL = "https://quipper.github.io/native-technical-exam/images/okamoto.jpg",
        videoURL = "https://quipper.github.io/native-technical-exam/videos/okamoto.mp4",
        videoDuration = 75000
    ),
    CourseEntity(
        title = "G12 English",
        presenterName = "Masao Seki",
        description = "90 seconds exercise for English",
        thumbnailURL = "https://quipper.github.io/native-technical-exam/images/seki.jpg",
        videoURL = "https://quipper.github.io/native-technical-exam/videos/seki.mp4",
        videoDuration = 86000
    ),
    CourseEntity(
        title = "G12 Math",
        presenterName = "Keisuke Yamauchi",
        description = "90 seconds exercise for Math",
        thumbnailURL = "https://quipper.github.io/native-technical-exam/images/yamauchi.jpg",
        videoURL = "https://quipper.github.io/native-technical-exam/videos/yamauchi.mp4",
        videoDuration = 105000
    ),
    CourseEntity(
        title = "G12 Japanese History",
        presenterName = "Gaichi Ito",
        description = "90 seconds exercise for Japanese History",
        thumbnailURL = "https://quipper.github.io/native-technical-exam/images/ito.jpg",
        videoURL = "https://quipper.github.io/native-technical-exam/videos/ito.mp4",
        videoDuration = 104000
    )
)