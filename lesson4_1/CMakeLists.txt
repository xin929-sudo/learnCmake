# 1.寻找系统自带的多线程库 （Threads 是 CMake 的内置模块名）
# REQUIRED 表示如果系统找不到多线程库，CMake会在配置阶段直接报错拦截
find_package(Threads REQUIRED)

# 2. 生成可执行程序目标
add_executable(mult_thread main.cpp)

# 3.链接
target_link_libraries(mult_thread PRIVATE Threads::Threads)
