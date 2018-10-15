/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p058-ex2.31.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月14日
*   Description ：
================================================================*/

int main() {

    const int v2 = 0;
    int v1 = v2;

    int &r1 = v1;

    r1 = v2;

    const int &r2 = v1;

    return 0;
}
