#include "add.h"
#include "common.h" // 偷偷在后厨使用底层模块

int do_add(int a, int b) {
    print_log("Calculating Addition..."); // 调用 common
    return a + b;
}