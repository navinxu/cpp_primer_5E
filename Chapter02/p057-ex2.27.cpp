/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p057-ex2.27.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月13日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    //int i = 123;
    //const int i2 = i, &r = i;
    const int i = 123;
    int i3 = i;

    //const int i2 = 0;
    int i2 = 0;
    const int *const p3 = &i2;

    //const int ic;
    //int i1 = ic;

    return 0;
}

