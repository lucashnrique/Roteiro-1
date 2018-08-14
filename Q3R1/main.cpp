#include <iostream>
#include "Empregado.h"

int main()
{
    Empregado keijota("Bruno","Henrique",400.50);
    Empregado xicorita("Francisco","Lima",500);

    std::cout<<keijota.getSalario()*12<<std::endl;
    std::cout<<xicorita.getSalario()*12<<std::endl;

    double x=xicorita.getSalario();
    double k=keijota.getSalario();

    xicorita.setSalario(x+(x*0.1));
    keijota.setSalario(k+(k*0.1));

    std::cout<<keijota.getSalario()*12<<std::endl;
    std::cout<<xicorita.getSalario()*12<<std::endl;
}
