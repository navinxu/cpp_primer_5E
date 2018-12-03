/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p091-3.3.2-ex3.15.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月03日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<std::string> strs;
    std::string input;
    while (std::cin >> input)
        strs.push_back(input);

    if (strs.empty())
        return 1;

    for (decltype(strs.size()) index = 0; index < strs.size(); index ++)
        std::cout << strs[index] << std::endl;

    return 0;
}

