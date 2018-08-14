#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;

    public:
        Invoice(std::string d,int n,int q,double p);
        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        double getPreco();
        void setNumero(int n);
        void setDescricao(std::string d);
        void setQuantidade(int q);
        void setPreco(double p);
        double getInvoiceAmount();
};
#endif // INVOICE_H
