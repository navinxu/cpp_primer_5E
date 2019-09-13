/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p116-3.6-ex3.43-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
#include <cstddef>
using namespace std;

int main() {

    int nums[3][4] = {{5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    cout << "范围 for 语句" << endl;
    for (int (&c)[4] : nums) {
        for (int c2 : c) {
            std::cout << c2 << ' ';
        }
        std::cout << std::endl;
    }

    cout << "应用 for 语句及下标" << endl;
    for (size_t i = 0; i < 3; i ++) {
        for (size_t  j = 0; j < 4; j ++) {
            std::cout << nums[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "使用指针" << endl;
    for (int (*p)[4] = nums; p < nums + 3; p ++) {
        for (int *q = *p; q < *p + 4; q ++) {
            cout << *q << ' ';
        }
        cout << endl;
    }

    return 0;
}
