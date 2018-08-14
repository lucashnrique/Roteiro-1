#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

class Empregado
{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;

    public:
        Empregado(std::string n,std::string sn,double s);
        std::string getNome();
        std::string getSobrenome();
        double getSalario();
        void setNome(std::string n);
        void setSobrenome(std::string sn);
        void setSalario(double s);
};

#endif // EMPREGADO_H
