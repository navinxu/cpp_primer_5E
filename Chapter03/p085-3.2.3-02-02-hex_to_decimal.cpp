/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p085-3.2.3-02-02-hex_to_decimal.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月10日
*   Description ：
================================================================*/
#include <iostream>
#include <string>

int main() {

    std::string hexdigits("0123456789abcdef"), result;
    std::string::size_type decdigit;

    while (std::cin >> decdigit) {

        if (decdigit < hexdigits.size())
            result += hexdigits[decdigit];            
    }

    std::cout << "Convert Result: " << result << std::endl;

    return 0;
}
