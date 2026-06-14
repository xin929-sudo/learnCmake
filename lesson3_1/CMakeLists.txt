
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_executable(my_tiny_app main.cpp)


# 编译期去哪儿找这个库
target_link_libraries(my_tiny_app ${CMAKE_CURRENT_SOURCE_DIR}/lib/libz.so.1)

# 运行时如何找
set_target_properties(my_tiny_app PROPERTIES 
    INSTALL_RPATH "\$ORIGIN/lib"  # 告诉程序：运行时去你旁边的 lib 文件夹里找库！
    BUILD_WITH_INSTALL_RPATH TRUE
)