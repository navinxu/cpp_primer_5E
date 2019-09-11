/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p101-ex3.24-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> veci;
    int input;

    while (cin >> input) 
        veci.push_back(input);

    for (auto begin = veci.begin(), end = veci.end(); begin < end; begin ++) {
        cout << *begin << " ";
    }

    cout << endl;

    for (auto begin = veci.begin(), end = veci.end(); begin < end; begin ++) {
        if (begin <= end - 1)
            cout << *begin + *(++ begin) << endl;
        else
            cout << *begin << endl;
    }

    return 0;
}
