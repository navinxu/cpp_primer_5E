/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p101-ex3.24-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月31日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> veci;
    int input;

    while (cin >> input) {
        veci.push_back(input);
    }

    for (auto beg = veci.cbegin(), end = veci.cend(); beg != end; beg ++) {
        if (beg == veci.begin())
            cout << *beg;
        else
            cout << " " << *beg;

        if (beg == end - 1)
            cout << endl;
    }

    vector<int>::iterator beg = veci.begin(), end = veci.end();

    if (beg != end)
        end --;
    else  {
        cout << "请输入至少一个数字" << endl;
        return 0;
    }

    // 0 1 2 3
    // 0 1 2 3 4
    int head, tail;
    for (; beg <= end; beg ++, end --) {

        head = *beg;
        tail = (beg == end) ? 0 : *end;
        //if (beg == end)
        //    tail = 0;
        //else
        //    tail = *end;

        if (beg == veci.begin()) {
            cout << head + tail;
        } else {
            cout << " " << head + tail;
        }
    }

    

    return 0;
}
