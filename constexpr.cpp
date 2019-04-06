/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：constexpr.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年04月06日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    int i = 10;
    constexpr int ci = i;
    std::cout << ci << std::endl;

    return 0;
}
