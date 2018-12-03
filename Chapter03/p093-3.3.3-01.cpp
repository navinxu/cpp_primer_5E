/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p093-3.3.3-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年12月03日
*   Description ：
================================================================*/
#include <iostream>
#include <vector>

int main() {

    std::vector<int> scores(11, 0);
    unsigned int grades;

    while (std::cin >> grades)
        if (grades >=0 && grades <= 100)
            scores[grades / 10] ++;

    for (decltype(scores.size()) index = 0; index < scores.size(); index ++)
        std::cout << scores[index] << " ";

    

    return 0;
}

