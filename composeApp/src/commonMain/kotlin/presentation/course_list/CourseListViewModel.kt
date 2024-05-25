package presentation.course_list

import data.remote.ApiStatus
import data.remote.NetworkRepository
import dev.icerock.moko.mvvm.viewmodel.ViewModel
import domain.CourseEntity
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

class CourseListViewModel(private val networkRepository: NetworkRepository) : ViewModel() {

    private val _courseState = MutableStateFlow(CourseListState())
    private val _courseViewState: MutableStateFlow<CourseListScreenState> = MutableStateFlow(
        CourseListScreenState.Loading
    )

    val courseListViewState = _courseViewState.asStateFlow()

    suspend fun course() {
        CoroutineScope(Dispatchers.IO).launch {
            try {
                networkRepository.course().collect{response ->
                    when(response.status){
                        ApiStatus.LOADING->{
                            _courseState.update { it.copy(isLoading = true) }
                        }
                        ApiStatus.SUCCESS->{
                            _courseState.update { it.copy(isLoading = false, errorMessage = "", response.data) }
                        }
                        ApiStatus.ERROR->{
                            _courseState.update { it.copy(isLoading = false, errorMessage = "Error") }
                        }
                    }
                    _courseViewState.value = _courseState.value.toUiState()
                }
            } catch (e: Exception) {
                _courseState.update { it.copy(isLoading = false,errorMessage ="Failed to fetch data") }
            }
        }
    }
    sealed class CourseListScreenState {
        data object Loading: CourseListScreenState()
        data class Error(val errorMessage: String): CourseListScreenState()
        data class Success(val responseData: List<CourseEntity>): CourseListScreenState()
    }
    private data class CourseListState(
        val isLoading:Boolean = false,
        val errorMessage: String?=null,
        val responseData: List<CourseEntity>?= emptyList()
    ) {
        fun toUiState(): CourseListScreenState {
            return if (isLoading) {
                CourseListScreenState.Loading
            } else if(errorMessage?.isNotEmpty()==true) {
                CourseListScreenState.Error(errorMessage)
            } else {
                CourseListScreenState.Success(responseData!!)
            }
        }
    }
}