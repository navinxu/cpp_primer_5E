/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p011-ex1.9.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年04月23日
*   Description ：
================================================================*/
#include <iostream>
using std::cout;using std::endl;

int main() {
    int sum = 0, begin = 50;
    while (begin <= 100) {
        sum = sum + begin;
        begin ++;
    }

    cout << sum << endl;
    
    return 0;
}
