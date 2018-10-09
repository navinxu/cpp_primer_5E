/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p045-2.3.1-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月09日
*   Description ：
================================================================*/
#include <iostream>

int main() {

    int val = 123;
    int &relval = val;
    int &relval2 = relval;

    std::cout << "val = " << val << std::endl;
    relval = 3345;
    std::cout << "After relval change,val = " << val << std::endl;
    std::cout << "And now, relval2 = " << relval2 << std::endl;
    int val2 = relval;
    std::cout << "val2 = " << val2 << std::endl;

    return 0;
}

