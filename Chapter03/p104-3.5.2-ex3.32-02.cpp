/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p104-3.5.2-ex3.32-02.cpp
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
    size_t j = 0;
    for (decltype(veci.size()) i = 0; i < 10; i ++, j ++) 
        veci.push_back(j);

    vector<size_t> veci2;
    for (auto c : veci)
        veci2.push_back(c);

    for (auto c : veci2)
        cout << c << " ";

    return 0;
}
