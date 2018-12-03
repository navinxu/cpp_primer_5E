/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p086-3.2.3-ex-3.8-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {
    std::string s("Hello World!!");
    std::string::size_type size = s.size();
    std::string::size_type n = 0;

    while (n < size) {
        s[n] = 'X';
        n++;
    }

    std::cout << s << std::endl;
    return 0;
}

