/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p101-3.4.2-ex3.25.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月11日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> scores;

    int count = 0;
    while (count++ < 11)
        scores.push_back(0);

    //int count2 = 0;
    //for (auto begin = scores.begin(), end = scores.end(); begin < end; begin ++, ++count2)
    //    cout << *begin << " ";
    //cout << endl;
    //cout <<  count2 << endl;

    //return 0;

    int grade;
    auto begin = scores.begin();
    auto end = scores.end();
    while (cin >> grade) {
        if (grade == -1)
            break;
        if (grade >= 0 && grade <= 100) {
           grade = grade / 10;
           if ((grade + begin) != end)
               (*(grade + begin)) ++;
        }
    }   

    //for (auto begin = scores.begin(), end = scores.end(); begin < end; begin ++)
    //    cout << *begin << " ";
    //cout << endl;

    for (auto c: scores)
        cout << c << endl;

    return 0;
}
