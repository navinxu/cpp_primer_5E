/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：p067-2.6.2-01.cpp
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月19日
*   Description ：
================================================================*/
#include <iostream>
#include "Sales_data.h"

int main() {

    Sales_data data1, data2;

    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;

    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;

    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo) {
        unsigned int totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << "  " << totalCnt 
            << "  " << totalRevenue <<  "  ";

        if (totalCnt != 0) 
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        
    } else {
        std::cout << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }
}
