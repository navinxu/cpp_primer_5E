/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p086-3.2.3-ex-3.10-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月10日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
using namespace std;

int main() {

    string s("Hello,world!!!"), result;
    cout << "Before: " << s << endl;
    for (auto &c : s)
        if (!ispunct(c))
            result += c;
    cout << "The Result is: " << result << endl;

    return 0;
}
