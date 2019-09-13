/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p110-3.5.4-ex3.39-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    const char s1[] = "Hello";
    const char s2[] = "Hello";

    if (strcmp(s1, s2) == 0) 
        cout << "s1 == s2" << endl;
    else if (strcmp(s1, s2) < 0)
        cout << "s1 < s2" << endl;
    else
        cout << "s1 > s2" << endl;


    return 0;
}
