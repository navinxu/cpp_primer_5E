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

    std::string str1, str2;

    std::cout << "请输入两个字符串，用空格分开：";
    std::cin >> str1 >> str2;

    /*
    if (str1 == str2) 
        std::cout << "相等" << std::endl;
    else
        std::cout << "不相等" << std::endl;
        if (str1 > str2)
            std::cout << str1 << std::endl;
        else
            std::cout << str2 << std::endl;
            */
    if (str1.size() > str2.size()) 
        std::cout << str1 << std::endl;
    else if (str1.size() < str2.size())
        std::cout << str2 << std::endl;


    return 0;
}

