/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p116-3.6-ex3.44.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月13日
*   Description ：
================================================================*/
#include <iostream>
using namespace std;

int main() {
    int nums[3][4] = {{5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    using int_array = int[4];

    for (int_array *p = nums; p < nums + 3; p ++) {
        for (int *q = *p; q < *p + 4; q ++) {
            cout << *q << ' ';    
        }
        cout << endl;
    }

}
