add_library(sub STATIC sub.cpp)
target_include_directories(sub PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 核心隔离魔法：用 PRIVATE 链接 common。
# 这意味着 sub 的下家（calculator）绝不会被传染 common 的任何信息！
target_link_libraries(sub PRIVATE common)