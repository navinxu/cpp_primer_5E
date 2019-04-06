/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p062-2.35.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年04月06日
*   Description ：
================================================================*/
#include <iostream>
#include <typeinfo>

int main() {

    const int i = 42;

    auto j = i;
    const auto &k = i; 
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    //j2 = 1;
    //k2 = 1;

    int i2 = 123;
    const int &ci = i2;


    auto &a = ci;

    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(a).name() << std::endl;

    return 0;
}
