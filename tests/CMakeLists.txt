add_library(functions function.cpp)

add_executable(test_runner tests.cpp)
target_link_libraries(test_runner functions)