/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p106-3.5.3-get_first_negative.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <iterator>
using namespace std;

int main() {

    //int nums[] = {1,2, 3, -5, 6, 19, -10, 20};
    int nums[] = {1,2, 3, 5, 6, 19, 10, 20};
    auto pBegin = begin(nums);
    auto pEnd = end(nums);

    while (pBegin != pEnd && *pBegin >= 0)
        ++ pBegin;

    if (pBegin == pEnd)
        cout << "Not Found!" << endl;
    else
        cout << "Found!The negative number is " << *pBegin << endl;


            

    return 0;
}
