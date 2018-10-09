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

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;

    return 0;
}

