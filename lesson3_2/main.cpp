#include "calculator.h"
#include <iostream>

// main 函数非常干净，它连 add、sub、common 的存在都不知道！
int main() {
    std::cout << "5 + 3 = " << run_calc_add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << run_calc_sub(5, 3) << std::endl;
    return 0;
}