add_library(functions function.cpp)

add_executable(main main.cpp)

target link_libraries(main functions)
