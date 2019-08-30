/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p096-3.4-o1.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月30日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
#include <cctype>

int main() {

    std::string s("some string");

    std::cout << "Before: " << s << std::endl;

    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = std::toupper(*it);
    }

    std::cout << "After: " << s << std::endl;

    return 0;
}
