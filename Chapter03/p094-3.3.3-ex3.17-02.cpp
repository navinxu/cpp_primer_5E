/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.17-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月15日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string input;
    vector<string> vs;

    while (cin >> input) {
        vs.push_back(input);
    }

    for (auto &str : vs) {
        for (auto &c : str)
            c = toupper(c);
    }

    for (auto str : vs)
        cout << str << endl;

    return 0;
}

