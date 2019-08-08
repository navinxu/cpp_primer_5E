/*================================================================
*   Copyright (C) 2019 Navin Xu. All rights reserved.
*   
*   Filename    ：p081-3.2.2-ex3.5-02.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2019年08月09日
*   Description ：
================================================================*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    
    bool is_first_input =  true;
    char cont = 'Y';

    while (cin >> input) {
        if (!is_first_input)
            result += ' ';

        is_first_input = false;

        result += input;

        cout << "Continue: Y/N:"; 
        getchar();
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
    }

    cout << result << endl;

    return 0;
}


