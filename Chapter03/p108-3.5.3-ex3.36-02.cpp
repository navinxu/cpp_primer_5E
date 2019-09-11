/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p108-3.5.3-ex3.36-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> veci1 = {1,2,3,4,5};
    vector<int> veci2 = {1,2,3,4,5};


    auto beg1 = veci1.begin();
    auto beg2 = veci2.begin();
    auto end1 = veci1.end();
    auto end2 = veci2.end();

    if (end1 - beg1 != end2 - beg2) {
        cout << "Not same." << endl;
        return 0;
    } 

    while (beg1 < end1 && beg2 < end2) {
        if (*beg1 != *beg2) {
            cout << "Not same." << endl;
            return 0;
        }

        beg1 ++;
        beg2 ++;
    }

    if (beg1 == end1 && beg2 == end2)
        cout << "The same." << endl;

    return 0;
}
