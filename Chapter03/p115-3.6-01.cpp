/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p115-3.6-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    int nums[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    for (auto p = nums; p != nums + sizeof(nums) / 3 / sizeof(int); p ++) {
        for (auto q = *p; q != *p + 3; q ++) {
            std::cout << *q << std::endl;
        }
    }

    return 0;
}
