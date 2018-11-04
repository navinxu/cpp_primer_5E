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

    std::string line;

    while (std::getline(std::cin, line))
        if (!line.empty())
            if (line.size() > 15)
                std::cout << line << std::endl;

    std::cout << "END" << std::endl;

    return 0;
}

