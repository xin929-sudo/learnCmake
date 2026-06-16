add_library(common STATIC common.cpp)

# public 暴露出自己的头文件目录，让直接链接到 common 的人能找到 common.h
target_include_directories(common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})