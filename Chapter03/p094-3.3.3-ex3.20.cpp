/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.20.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月15日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int input;
    vector<int> vi;

    while (cin >> input)
        vi.push_back(input);

    cout << "Numbers: ";
    for (auto num : vi)
        cout << num << " ";
    cout << endl;

    for (decltype(vi.size()) index = 0; index < vi.size() - 1; index ++) {
        cout << vi[index] << " + " << vi[index + 1] << " = " << vi[index] + vi[index + 1] << endl;
    }

    return 0;
}
