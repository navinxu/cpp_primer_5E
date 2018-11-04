/*================================================================
*   Copyright (C) 2018 Navin Xu. All rights reserved.
*   
*   Filename    ：Sales_data.h
*   Author      ：Navin Xu
*   E-Mail      ：admin@navinxu.com
*   Create Date ：2018年10月19日
*   Description ：
================================================================*/
#include <string>

#ifndef SALES_DATA_H
#define SALES_DATA_H
struct Sales_data {
    std::string bookNo;
    double units_sold; // 销售数量
    double revenue; // 总价
};
#endif
