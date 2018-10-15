/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p057-ex2.28.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月14日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    //double dval = 1.1223;
    //const int *p = &dval;
    int i = 1;
    const int *p = &i;

    const int *const p3 = &i;
    //int *p1 = p3;
    const int *p1 = p3;


    return 0;
}

