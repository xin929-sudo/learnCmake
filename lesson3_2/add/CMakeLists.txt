add_library(add STATIC add.cpp)
target_include_directories(add PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 核心隔离魔法：用 PRIVATE 链接 common。
# 这意味着 add 的下家（calculator）绝不会被传染 common 的任何信息！
# 我 add 确实需要用到 common 的功能。
# 但是，这属于我的‘内部私事（后厨细节）’。请帮我把墙筑高，谁要是链接了我（比如 calculator），绝对不准把 common 的头文件路径传染给它！
target_link_libraries(add PRIVATE common)