#include "Empregado.h"

Empregado::Empregado(std::string n,std::string sn,double s){
    nome=n;
    sobrenome=sn;
    if(s>0)
        salario=s;
}
std::string Empregado::getNome(){
    return nome;
};
std::string Empregado::getSobrenome(){
    return sobrenome;
};
double Empregado::getSalario(){
    return salario;
};
void Empregado::setNome(std::string n){
    nome=n;
};
void Empregado::setSobrenome(std::string sn){
    sobrenome=sn;
};
void Empregado::setSalario(double s){
    salario=s;
};
