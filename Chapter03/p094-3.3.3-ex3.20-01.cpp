/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.20-01.cpp
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

    if (integers.empty()) {
        std::cout << "请输入一些数字！" << std::endl;
        return 1;
    }

    unsigned int sum;
    for (decltype(integers.size()) index = 0; index < integers.size(); index += 2) {
        if (integers.size() == 1) {
            std::cout <<  integers[index];
            break;
        }

        std::cout << integers[index] << " ";

        if (integers.size() % 2 != 0) {
            if (index == integers.size() - 1) {
                sum = integers[index];
            }
            else {
                std::cout << integers[index + 1];
                sum = integers[index] + integers[index + 1];
            }
        }
        else {
                std::cout << integers[index + 1];
                sum = integers[index] + integers[index + 1];
        }
        std::cout << std::endl;
        std::cout <<  sum << std::endl;
    }



    return 0;
}


