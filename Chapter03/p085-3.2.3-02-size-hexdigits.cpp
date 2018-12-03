/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p085-3.2.3-02-size-hexdigits.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月01日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    const std::string hexdigits = "0123456789abcdef";

    std::cout << "请输入一系列在区间0～15之间的数字，以空格为间隔。" 
                << "按Enter键结束输入:"
                << std::endl;

    std::string result = "";

    std::string::size_type n;
    while (std::cin >> n ) {
        if (n < hexdigits.size())
            result += hexdigits[n];
    }

    std::cout << "得到的十六进制数字为：" << result << std::endl;

    return 0;
}

