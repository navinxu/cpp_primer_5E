/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p110-3.5.4-ex3.40.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    const char s1[] = "Hello ";
    const char s2[] = "World.";

    char s[100];
    for (size_t i = 0; i < 100; i ++)
        s[i] = '\0';

    strcpy(s, s1);
    strcat(s, s2);

    cout << s << endl;

    return 0;
}
