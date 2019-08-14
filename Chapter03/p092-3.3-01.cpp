/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p092-3.3-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月15日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto &i : vi)
        i *= i;

    for (decltype(vi.size()) index = 0; index < vi.size(); index ++)
        cout << vi[index] << " ";

    return 0;
}
