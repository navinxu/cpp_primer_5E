/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p102-3.5-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
#include <cstdio>
#include <cstring>

int main() {

    //char a1[] = {'H', 'e', 'l', 'l', 'o'};
    //char a1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char a1[6] = "Hello";
    printf("%s\n", a1);
    printf("%lu\n", strlen(a1));

    return 0;
}

