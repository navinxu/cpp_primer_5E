/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p104-3.5.2-ex3.31.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <cstddef>

int main() {

    int iVal[10];

    for (std::size_t i = 0; i < 10; i ++)
        iVal[i] = i;

    for (auto c : iVal)
        std::cout << c << " ";

    return 0;
}
