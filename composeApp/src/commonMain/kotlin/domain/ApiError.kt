package domain

data class ApiError(
    val httpCode: Int,
    val isError: Boolean,
    val errorMessage: String,
    val errorCode: String,
): Exception()