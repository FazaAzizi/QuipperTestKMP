package data.remote

import domain.CourseEntity
import io.ktor.client.HttpClient
import io.ktor.client.request.forms.FormDataContent
import io.ktor.client.utils.EmptyContent.contentType
import io.ktor.http.ContentType
import io.ktor.http.Parameters
import kotlinx.coroutines.flow.Flow
import io.ktor.client.call.body
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.request.setBody
import io.ktor.http.contentType

class NetworkRepository(private val httpClient: HttpClient) {

    fun course(): Flow<NetworkResult<List<CourseEntity>>> {
        return toResultFlow {
            val response = httpClient.get(ApiRoutes.COURSELIST) {
                contentType(ContentType.Application.Json)
                setBody(
                    FormDataContent(Parameters.build {})
                )
            }.body<List<CourseEntity>>()
            NetworkResult.Success(response)
        }
    }

}