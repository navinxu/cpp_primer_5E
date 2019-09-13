/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p112-3.5.5-ex3.41.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {

    const int nums[] = {1,2,3,4,5,6};

    vector<int> veci(begin(nums), end(nums));

    for (auto c : veci)
        cout << c << endl;

    return 0;
}

