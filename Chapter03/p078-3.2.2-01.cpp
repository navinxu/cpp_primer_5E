/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：test.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年11月04日
*   Description ： 读取未知数量的string 对象
================================================================*/
#include <iostream>
#include <string>

int main() {

    std::string word;
    // 忽略遇到的空格、换行符和制表符
    while (std::cin >> word)
        std::cout << word << std::endl;
    std::cout << "END" << std::endl;

    return 0;
}

