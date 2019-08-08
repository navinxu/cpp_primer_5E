/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p081-3.2.2-ex3.4-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月08日
*   Description ：
================================================================*/
#include <iostream>
#include <string>

int main() {

    std::string s1, s2;
    std::cin >> s1 >> s2;
    if (s1 == s2) {
        std::cout << s1 << " 与 " << s2 << " 相等" << std::endl;
    } else {
        if (s1 > s2) 
            std::cout << s1 << std::endl;
        else
            std::cout << s2 << std::endl;
    }

    return 0;
}
