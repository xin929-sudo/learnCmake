#pragma once
// 完美隔离：这里坚决不 #include "add.h" 或 "sub.h"
int run_calc_add(int a, int b);
int run_calc_sub(int a, int b);