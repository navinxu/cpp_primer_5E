/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p091-3.3.2-ex3.14-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月14日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main() {

    int input;
    vector<int> vi;
    char c;
    
    while (cin >> input) {
        vi.push_back(input);

        cout << "Continue(Y/N): ";
        cin >> c;
        if (c != 'Y' && c != 'y')
            break;
    }

    for (auto i : vi)
        cout << i << " ";

    return 0;
}
