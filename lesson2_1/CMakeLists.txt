add_subdirectory(add)

include_directories(./lib)

add_executable(lesson2_1 main.cpp)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

# 这里在进行静态库的链接的时候，必须要使用绝对路径和完成的静态库名字
target_link_libraries(lesson2_1 ${CMAKE_CURRENT_SOURCE_DIR}/lib/libadd_static_lib.a)