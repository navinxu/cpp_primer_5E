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
    int &relval = val;
    int * p = &relval;

    std::cout << *p << std::endl;

    return 0;
}

