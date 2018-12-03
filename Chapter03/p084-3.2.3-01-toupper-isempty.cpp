/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p084-3.2.3-01-toupper-isempty.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    std::string s("some string");
    if (!s.empty())
        s[0] = toupper(s[0]);

    std::cout << s << std::endl;


    return 0;
}

