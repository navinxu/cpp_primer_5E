/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.20.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月03日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>

int main() {

    std::vector<unsigned int> integers;
    unsigned int num;

    while (std::cin >> num)
        integers.push_back(num);

    unsigned int last_num;
    for (decltype(integers.size()) index = 0; index < integers.size(); index ++) {
        if (index > 0) {
            std::cout << integers[index] << " " << last_num << std::endl;
            std::cout << integers[index] + last_num << std::endl;
        }
        last_num = integers[index];

    }

    return 0;
}

