/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p101-ex3.25.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月31日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> scores(11, 0);

    int grade;

    std::vector<int>::iterator beg;
    std::vector<int>::iterator now;
    auto end = scores.end();
    while (std::cin >> grade) {
        beg = scores.begin();
        if (grade >= 0 &&grade <= 100) {
            now = beg + grade / 10;
            if (now != end)
                (*now) ++;
        }
    }

    for (auto c : scores)
        std::cout << c << " " << std::endl;


    return 0;
}
