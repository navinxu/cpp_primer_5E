/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p115-3.6-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
using namespace std;

int main () {

    int ia[][2] = {{1, 2}, {3, 4}, {5, 6}};


    for (auto p = begin(ia); p != end(ia); p ++) {
        for (auto q = begin(*p); q != end(*p); q++ ) {
            std::cout << *q << std::endl;
        }
    }

    return 0;
}
