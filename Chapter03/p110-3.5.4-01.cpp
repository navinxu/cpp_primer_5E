/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p110-3.5.4-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {

    char s[] = "Hello";
    char s2[100] = "World";

    strcat(s2, s);
    
    printf("%s\n", s2);

    return 0;
}
