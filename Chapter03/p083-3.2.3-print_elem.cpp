/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p083-3.2.3-print_elem.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月09日
*   Description ：
================================================================*/
#include <iostream>
#include <string>

int main() {

    std::string s("Hello World!!!");
    for (auto c : s)
        std::cout << c << std::endl;

    return 0;
}

