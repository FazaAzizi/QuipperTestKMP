package di

import org.koin.dsl.module
import presentation.course_list.CourseListViewModel

val viewModelModule = module {
    factory { CourseListViewModel(get()) }
}