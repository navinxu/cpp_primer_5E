/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p113-3.6-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
#include <cstddef>

int main() {

    constexpr std::size_t rowCnt = 3, colCnt = 4;

    int ia[rowCnt][colCnt];

    for (std::size_t i = 0;i < rowCnt; i ++) {
        for (std::size_t j = 0; j < colCnt; j ++) {
            ia[i][j] = i * colCnt + j; 
        }
    }

    for (std::size_t i = 0;i < rowCnt; i ++) {
        for (std::size_t j = 0; j < colCnt; j ++) {
            std::cout << ia[i][j] << " "; 
        }
    }

    std::cout << std::endl;
    for (auto c : ia) {
        std::cout << *c << std::endl;
    }



    return 0;
}
