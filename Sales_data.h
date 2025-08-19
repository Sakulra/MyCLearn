#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data
{
    std::string bookNo;/*ISBN*/
    unsigned sale_num;/*售出数量*/
    double revenue;/*销售总额*/
};
#endif