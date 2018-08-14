#include <iostream>
#include "Data.h"

int main()
{
    Data data1(31,12,2018);
    Data trote(6,8,2018);

    std::cout<<data1.getDia()<<"/"<<data1.getMes()<<"/"<<data1.getAno()<<std::endl;

    data1.avancarDia();

    std::cout<<data1.getDia()<<"/"<<data1.getMes()<<"/"<<data1.getAno()<<std::endl;

    std::cout<<trote.getDia()<<"/"<<trote.getMes()<<"/"<<trote.getAno()<<std::endl;

    trote.setMes(11);

    std::cout<<trote.getDia()<<"/"<<trote.getMes()<<"/"<<trote.getAno()<<std::endl;

    return 0;
}
