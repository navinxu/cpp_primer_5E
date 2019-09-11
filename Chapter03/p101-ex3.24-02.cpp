/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p101-3.4.2-ex3.24.cpp
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
    while (cin >> input) {
        veci.push_back(input);
    }

    auto c_begin = veci.cbegin();
    auto c_end = veci.cend();

    if (c_begin == c_end) {
        cout << "没有任何元素" << endl;
        return 0;
    }

    for (auto begin = veci.begin(), end = veci.end(); begin < end; begin ++)
        cout << *begin << " "; 
    cout << endl;

    for (auto begin = veci.begin(), end = veci.end() - 1; begin <= end; begin ++, end --) {
        if (begin == end)
            cout << *begin << endl;
        else
            cout << *begin + *end << endl;
    }

    return 0;
}
