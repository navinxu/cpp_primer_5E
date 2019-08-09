/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p086-3.2.3-ex-3.7-01.cpp
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
    for (char &c : s)
        c = 'X';

    cout << s << endl;

    return 0;
}
