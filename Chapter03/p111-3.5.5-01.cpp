/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p111-3.5.5-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
#include <cstring>
#include <cstddef>

int main() {

    std::string s("Hello");
    const char *cp = s.c_str();
    std::cout << *(cp+ 4) << std::endl;
    s = "Hello World.";
    std::cout << *(cp + 5) << std::endl;


    char cs[100];
    std::size_t i;
    for (i = 0; i < strlen(s.c_str()); i ++) {
        cs[i] = s.c_str()[i];
    }

    cs[i] = '\0';

    std::cout << cs << std::endl;

    return 0;
}
