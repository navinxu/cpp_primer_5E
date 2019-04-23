/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p011-ex1.11.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年04月23日
*   Description ：
================================================================*/
#include <iostream>
using std::cin; using std::cout;
using std::endl;

int main() {

    int first_num = 0,second_num = 0;
    cout << "请在一行输入两个整数，用空格隔开：" << endl;
    cin >> first_num;
    cin >> second_num;

    if (first_num >= second_num) {
        for (;second_num <= first_num; second_num ++)
            cout << second_num << endl;
    } else {
        for (; second_num >= first_num; second_num --)
            cout << second_num << endl;
    }

    return 0;
}
