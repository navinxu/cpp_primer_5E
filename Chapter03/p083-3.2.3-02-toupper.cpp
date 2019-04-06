/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p083-3.2.3-02-toupper.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    std::string s("Hello World!!!");
    for (auto &c: s)
        c = toupper(c);
    std::cout << s << std::endl;

    return 0;
}

