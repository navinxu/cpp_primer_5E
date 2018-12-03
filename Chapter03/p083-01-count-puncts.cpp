/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p083-01-count-puncts.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {
    std::string s("Hello World!!!");
    decltype(s.size()) punct_count = 0;

    for (auto c: s)
        if (ispunct(c))
            punct_count ++;

    std::cout << punct_count << " punctuation characters in " << s << std::endl; 
}

