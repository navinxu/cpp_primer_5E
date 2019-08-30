/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p096-3.4-02-for.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月30日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s("some thing");
    std::cout << "Before: " << s << std::endl;

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) 
        *it = std::toupper(*it);

    std::cout << "After: " << s << std::endl;

    return 0;
}
