#include <iostream>
#include "zlib.h"

int main() {
    std::cout << "Hello Lightweight Library!" << std::endl;
    // 调用 zlib 动态库里的函数，获取版本号
    std::cout << "ZLIB Version loaded: " << zlibVersion() << std::endl;
    std::cout << "ZLIB Version loaded: " << zlibVersion() << std::endl;
    return 0;
}