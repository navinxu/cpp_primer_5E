/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p101-ex3.24.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月31日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> veci;
    int input;
    char yes;

    while (cin >> input) {

        cout << "Continue(Y/N): ";
        cin >> yes;
        veci.push_back(input);
        if (yes == 'Y' || yes == 'y')
            continue;
        else if (yes == 'N' || yes == 'n')
            break;
        else
            break;
    }

    int value1, value2;
    for (std::vector<int>::const_iterator beg = veci.begin(), cursor = veci.begin(); cursor != veci.end(); ++ cursor) {
        value1 = *cursor;
        cursor ++;
        if (cursor != veci.end()) {
            value2 = *cursor;
        }
        else {
            value2 = 0;
            cursor --;
        }

        if (cursor - beg == 1 || cursor == beg) {
            cout << value2 + value1;
        }
        else
            cout << " " << value1 + value2;
    }

    return 0;
}
