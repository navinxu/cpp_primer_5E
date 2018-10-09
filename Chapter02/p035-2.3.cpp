/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p035-2.3.cpp
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月07日
*   描    述：
================================================================*/
#include <iostream>
using namespace std;

int main() {

    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u << endl;
    cout << u - i << endl;

    return 0;
}
