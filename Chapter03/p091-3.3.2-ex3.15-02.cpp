/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p091-3.3.2-ex3.15-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月15日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string input;
    vector<string> vs;

    while (cin >> input) {

        vs.push_back(input);
        char c;
        cout << "Continue(Y/N): ";
        cin >> c;
        if (c != 'Y' && c != 'y')
            break;
    }

    for (auto str : vs)
        cout << str << endl;

    return 0;
}
