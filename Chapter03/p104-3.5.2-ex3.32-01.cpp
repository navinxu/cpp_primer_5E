/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p104-3.5.2-ex3.32-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <cstddef>
using namespace std;

int main() {

    size_t iVal[10];
    for (size_t i = 0; i < 10; i ++) 
        iVal[i] = i;

    size_t iCopyVal[10];
    for (size_t i = 0; i < 10; i ++) 
        iCopyVal[i] = iVal[i];

    for (auto c : iCopyVal)
        cout << c << " ";

    return 0;
}
