/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p108-3.5.3-ex3.36.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <iterator>
using namespace std;

int main() {

    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {1, 2, 3, 4, 5};

    auto beg1 = begin(nums1);
    auto beg2 = begin(nums2);
    auto end1 = end(nums1);
    auto end2 = end(nums2);

    for (; *beg1 == *beg2 && beg1 < end1 - 1 && beg2 < end2 - 1; beg1 ++, beg2 ++)
        ;

    if (*beg1 == *beg2 && beg1 == end1 - 1 && beg2 == end2 - 1)
        cout << "The same." << endl;
    else
        cout << "Not same." << endl;
}
