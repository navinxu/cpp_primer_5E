/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p102-3.5.1-char_array.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年09月15日
*   Description ：
================================================================*/
#include <iostream>
#include <cstdio>

int main() {
    char a[] = {'c', '+', '+'};
    int i = 0;
    while (a[i] != '\0')
        std::cout << a[i++] << ' ';
    std::cout <<  std::endl;
    std::printf("%dA\n", '\0');
    std::printf("%cB\n", '\0');


    int b[] = {0, 1, 2};
    int *c = b;
    int array[10];
    return 0;
}
