/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   文件名称：p040-01.cpp
*   创 建 者：Navin Xu
*   电子邮箱：admin@navinxu.com
*   创建日期：2018年09月09日
*   描    述：
================================================================*/
#include <iostream>
using namespace std;

int main() {

    long double ld = 3.1415926536;

    //int a{ld}, b = {ld}; // 报错
    int c(ld), d = ld;



    return 0;
}
