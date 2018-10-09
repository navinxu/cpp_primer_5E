/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p045-2.3.1-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月09日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    int val = 123;
    int * p = 0;
    p = &val;
    
    // 改变对象的值
    val = 456;

    std::cout << "val = " << val <<std::endl;
    std::cout << "*p = " << *p <<std::endl;

    *p = 100;

    std::cout << "val = " << val << std::endl;

    return 0;
}

