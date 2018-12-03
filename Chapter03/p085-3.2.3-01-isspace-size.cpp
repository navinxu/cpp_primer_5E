/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p085-3.2.3-01-isspace-size.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    std::string s("some string");
    for (decltype(s.size()) index = 0; 
            index != s.size() && !isspace(s[index]); ++index)
        s[index] = toupper(s[index]);

    std::cout << s << std::endl;

    return 0;
}

