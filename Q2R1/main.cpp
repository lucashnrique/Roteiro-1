#include <iostream>
#include <string>
#include "Invoice.h"

int main()
{
    Invoice faturaDaBolaAzul("bola azul bem bonita e cheirosa",657,3,10.50);

    std::cout<<"Descricao: "<<faturaDaBolaAzul.getDescricao()<<std::endl;
    std::cout<<"Preco: "<<faturaDaBolaAzul.getPreco()<<std::endl;
    std::cout<<"Numero: "<<faturaDaBolaAzul.getNumero()<<std::endl;
    std::cout<<"Quantidade: "<<faturaDaBolaAzul.getQuantidade()<<std::endl;
    std::cout<<"Fatura: "<<faturaDaBolaAzul.getInvoiceAmount()<<std::endl;

    return 0;
}
