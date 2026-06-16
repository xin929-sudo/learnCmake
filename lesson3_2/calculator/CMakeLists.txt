add_library(calculator STATIC calculator.cpp)
target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 核心隔离魔法：用 PRIVATE 链接 add 和 sub
target_link_libraries(calculator PRIVATE add sub)