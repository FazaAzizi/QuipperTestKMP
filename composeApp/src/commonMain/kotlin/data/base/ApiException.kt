package data.base

import domain.ApiError
import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable
import kotlinx.serialization.Transient

@Serializable
data class ApiException(
    @Transient
    val httpCode: Int = 0,
    @SerialName("error")
    val isError: Boolean,
    @SerialName("message")
    val errorMessage: String
): Exception() {
    fun map(isError: Boolean, message: String): ApiError {
        return ApiError(
            httpCode = httpCode,
            isError = isError,
            errorMessage = message,
            errorCode = ""
        )
    }
}