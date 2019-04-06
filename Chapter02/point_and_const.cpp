/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：point_and_const.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年04月06日
*   Description ：
================================================================*/
#include <iostream>

int main() {
    int i = 10;

    const int *p = &i;
    *p = 100;
    int b = 100;
    p = &b;
    return 0;
}
