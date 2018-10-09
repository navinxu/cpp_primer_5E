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

    //int &relval = 10;
    double dval = 3.14;
    int &relval2 = dval; // 产生错误

    return 0;
}

