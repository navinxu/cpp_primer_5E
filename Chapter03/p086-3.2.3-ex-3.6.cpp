/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p086-3.2.3-ex-3.6.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    std::string s("Hello World!!");
    for (auto &c: s)
        c = 'X';

    std::cout << s << std::endl;
        

    return 0;
}
