/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p091-3.3.2-ex3.14.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月03日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums;
    int i;

    while (std::cin >> i)
        nums.push_back(i);


    for (decltype(nums.size()) index = 0; index < nums.size(); index ++)
        std::cout << nums[index] << std::endl;


    return 0;
}

