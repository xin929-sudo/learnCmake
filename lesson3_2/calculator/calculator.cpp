#include "calculator.h"
#include "add.h"  // 后厨偷偷引入
#include "sub.h"  // 后厨偷偷引入

int run_calc_add(int a, int b) {
    return do_add(a, b);
}

int run_calc_sub(int a, int b) {
    return do_sub(a, b);
}