/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p055-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月13日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    int i = 0;
    const int &relval = i;

    const int i2 = 123;
    //int &relval2 = i2;
    const int &relval2 = i2;

    return 0;
}

