/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p112-3.5.5-ex3.42.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> veci{1,2,3,4,5};
    int nums[] = {0, 0, 0, 0, 0};

    for (decltype(veci.size()) index = 0; index < veci.size(); index ++)
        nums[index] = veci[index];

    for (auto c : nums)
        cout << c << endl;


    return 0;
}
