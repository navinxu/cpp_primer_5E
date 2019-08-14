/*================================================================
*   Copyright (C) 2019 Navecin Xu. All rights reserved.
*   
*   Filename    ：p094-3.3.3-ex3.20-02.cpp
*   Author      ：Navecin Xu
*   E-Mail      ：admin@navecinxu.com
*   Create Date ：2019年08月15日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int input;
    vector<int> veci;

    while (cin >> input)
        veci.push_back(input);

    if (veci.empty()) {

        cout << "请输入一些数字！" << endl;
        return 1;
    }

    cout << "Numbers: ";
    for (auto num : veci)
        cout << num << " ";
    cout << endl;

    auto size = veci.size();
    unsigned char is_odd = 0;
    if (size % 2 != 0)
        is_odd = 1;

    for (decltype(size) index = 0; index < size / 2; index ++) {
        cout << veci[index] << " + " << veci[size - index - 1] << " = " << veci[index] + veci[size - index - 1] << endl;

        if (index == size / 2 - 1 && is_odd)
            cout << veci[size / 2] << endl;
    }

    return 0;
}
