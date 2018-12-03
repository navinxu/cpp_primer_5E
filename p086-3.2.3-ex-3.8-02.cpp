/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p086-3.2.3-ex-3.8-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {
    std::string s("Hello World!!");
    for (decltype(s.size()) index = 0; index < s.size(); index ++)
        s[index] = 'X';
    std::cout << s << std::endl;

    return 0;
}

