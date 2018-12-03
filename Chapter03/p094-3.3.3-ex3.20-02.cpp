/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.20-02.cpp
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
    while (std::cin >> num) {
        std::cout << num << " ";
        integers.push_back(num);
    }
    std::cout << std::endl;

    unsigned int end;
    unsigned int head;
    decltype(integers.size()) end_index = integers.size();
    for (decltype(integers.size()) index = 0; index < end_index; index ++) {
        if (integers.size() < 2) {
            std::cout << integers[index] << std::endl;;
            break;
        }

        head = integers[index];
        end = integers[integers.size() - index - 1];

        if (index == (integers.size() - index - 1))
            std::cout << head << std::endl;
        else
            std::cout << head + end << std::endl;

        end_index--;
    }

    return 0;
}

