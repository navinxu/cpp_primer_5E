/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p108-3.5.3-ex3.35.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    int nums[] = {1, 2, 3, 4, 5};

    auto p = nums;
    int *e = p + sizeof(nums) / sizeof(int);

    while (p != e)
        *(p++) = 0;

    for (auto c: nums)
        std::cout << c << " ";

    return 0;
}
