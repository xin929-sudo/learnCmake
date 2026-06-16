add_subdirectory(common)
add_subdirectory(add)
add_subdirectory(sub)
add_subdirectory(calculator)

add_executable(main_app main.cpp)

# 主程序只需要 PRIVATE 链接它最直接依赖的 calculator
target_link_libraries(main_app PRIVATE calculator)