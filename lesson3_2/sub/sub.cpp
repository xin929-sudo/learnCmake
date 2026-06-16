#include "sub.h"
#include "common.h" // 偷偷在后厨使用底层模块

int do_sub(int a, int b) {
    print_log("Calculating Subtraction..."); // 调用 common
    return a - b;
}