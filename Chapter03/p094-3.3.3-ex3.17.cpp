/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.17.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月03日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
#include <vector>
#include <cctype> // toupper

int main() {

    std::vector<std::string> strs;
    std::string input;
    while (std::cin >> input) {
        strs.push_back(input);
    }

    std::cout << "===" << std::endl;
    for (auto str: strs) {
        for (auto &c: str)
            c = toupper(c);
        std::cout << str << std::endl;
    }
    std::cout << "===" << std::endl;
    

    return 0;
}

