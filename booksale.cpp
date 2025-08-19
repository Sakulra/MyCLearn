#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data1, data2;
    double price=0;
    /*读入第一批信息*/
    std::cin>>data1.bookNo>>data1.sale_num>>price;
    data1.revenue = data1.sale_num*price;
    /*读入第二批信息*/
    std::cin>>data2.bookNo >> data2.sale_num >> price;
    data2.revenue = price*data2.sale_num;
    /*输出ISBN、总销售量、总销售额、平均单价*/
    if(data1.bookNo == data2.bookNo)
    {
        unsigned total_sale_num = data1.sale_num + data2.sale_num;
        double total_revenue = data1.revenue + data2.revenue;
        if(total_sale_num !=0)
        {
            double average_price = total_revenue/total_sale_num;
            std::cout<<data1.bookNo<<" "<<total_sale_num<<" "<<total_revenue<<" "<<average_price<<std::endl;
        }
        else
        {
            std::cout<<"No Sale"<<std::endl;
            return 0;
        }
    }
    else
    {
        std::cout<<"输入的书不同"<<std::endl;
        return -1;
    }

}