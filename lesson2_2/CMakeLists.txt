# add_subdirectory(add)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_executable(lesson2_2 main.cpp)

# 【修改点 1】告诉 CMake 编译时去哪个文件夹里找动态库
target_link_directories(lesson2_2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib)
# target_link_libraries(lesson2_2 ${CMAKE_CURRENT_SOURCE_DIR}/lib/libadd_shared_lib.so)

# 【修改点 2】只写库的名字！去掉绝对路径，去掉 lib 前缀和 .so 后缀
# (系统会自动去上一步指定的目录里找名为 libadd_shared_lib.so 的文件)
target_link_libraries(lesson2_2 add_shared_lib)

# 【修改点 3】施加 RPATH 魔法，把相对路径 $ORIGIN 刻进程序的基因里
set_target_properties(lesson2_2 PROPERTIES 
    INSTALL_RPATH "\$ORIGIN"     # 告诉程序：运行时去你当前所在的文件夹找库
    BUILD_WITH_INSTALL_RPATH TRUE # 确保我们在本地 Build 完也能直接应用这个规则
)