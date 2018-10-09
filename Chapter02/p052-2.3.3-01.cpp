/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p052-2.3.3-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月10日
*   Description ：对指针的引用
================================================================*/
#include <iostream>

int main() {

    int i = 42;
    int *p;
    int* &r = p;
    //int &*r = p;

    r = &i;
    std::cout << "*p=" << *p << std::endl;
}

