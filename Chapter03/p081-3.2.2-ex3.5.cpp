/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p081-3.2.2-ex3.5.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年11月04日
*   Description ：
================================================================*/
#include <iostream>
#include <string>

int main() {

    std::string str1, str2;
    for (int i = 0; i < 3; i ++) {
        std::getline(std::cin, str1);
        if (i > 0)
            str1 = " " + str1;
        str2 += str1;
    }

    std::cout << str2 << std::endl;

    return 0;
}

