package data.remote

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow

fun <T> toResultFlow(call: suspend () -> NetworkResult<T?>) : Flow<NetworkResult<T>> {
    return flow {
        emit(NetworkResult.Loading(true))
        val c = call.invoke()
        c.let { response ->
            try {
                println("response${response.data}")
                emit(NetworkResult.Success(response.data))
            } catch (e: Exception) {
                emit(NetworkResult.Error(exception = e.toString()))
            }
        }
    }
}