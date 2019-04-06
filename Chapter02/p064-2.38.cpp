/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p064-2.38.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年04月06日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    // 相同的举例
    int i = 100;

    auto a = i;
    decltype(i) d = i;


    // 不同的举例
    const int &ci = i;
    auto a2 = ci;
    a2 = 2;
    std::cout << a2 << std::endl;
    decltype(ci) d2 = i;
    //d2 = 2;
    
    const int &c2 = i;

    auto a3 = c2;
    a3 = 22;
    decltype(c2) d3 = c2;
    d3 = 2222;

     


    return 0;
}
