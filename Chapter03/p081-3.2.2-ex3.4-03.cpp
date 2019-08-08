/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p081-3.2.2-ex3.4-03.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月08日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) {
        if (s1.size() > s2.size())
            cout << s1 << endl;
        else
            cout << s2 << endl;
    }

    return 0;
}

