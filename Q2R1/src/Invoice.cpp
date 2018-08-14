#include "Invoice.h"

Invoice::Invoice(std::string d,int n,int q,double p){
    descricao=d;
    numero=n;
    quantidade=q;
    preco=p;

    if(preco<0.0)
        preco=0.0;
    if(quantidade<0)
        quantidade=0;
}

int Invoice::getNumero(){
    return numero;
};
std::string Invoice::getDescricao(){
    return descricao;
};
int Invoice::getQuantidade(){
    return quantidade;
};
double Invoice::getPreco(){
    return preco;
};
void Invoice::setNumero(int n){
    numero=n;
};
void Invoice::setDescricao(std::string d){
    descricao=d;
};
void Invoice::setQuantidade(int q){
    quantidade=q;
};
void Invoice::setPreco(double p){
    preco=p;
};

double Invoice::getInvoiceAmount(){
    return quantidade*preco;
}
