/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p062-2.5.2-ex2.35.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月17日
*   Description ：
================================================================*/
#include <iostream>
#include <typeinfo>

int main() {

    const int i = 42;
    auto j = i;
    const auto &k = j;
    auto *p = &i;
    const auto j2 = i, &k2 = i;

    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;

    return 0;
}

