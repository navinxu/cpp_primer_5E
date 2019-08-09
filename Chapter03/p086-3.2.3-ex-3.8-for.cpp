/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p086-3.2.3-ex-3.8-for.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月10日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s("Hello");
    for (decltype(s.size()) index = 0; index < s.size(); index ++)
        s[index] = 'X';
    cout << s << endl;
    return 0;
}
