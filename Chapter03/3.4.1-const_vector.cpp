/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：3.4.1-const_vector.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年10月20日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>

int main() {

    const std::vector<int> cv{12, 12, 34, 53, 123, 5};

    for (auto beg = cv.begin(), end = cv.end(); beg != end; beg++) 
        std::cout << *beg << std::endl;

    return 0;
}
