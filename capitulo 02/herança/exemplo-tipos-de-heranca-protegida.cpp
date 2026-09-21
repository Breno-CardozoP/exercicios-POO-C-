
#include <iostream>
using namespace std;

class ContaBancaria{
public:
    void depositar(){
        cout<<"Deposito realizado.\n";
    }
    void sacar(){
        cout<<"saque realizado.\n";
    }
};

class ContaPoupanca : protected ContaBancaria{
public:
    void aplicarJuros(){
        cout<<"Juros apricados.\n";
        //pode chamar metodos herdados porque são protected
        depositar();
    }
};

class ContaEspecial : public ContaPoupanca{
public:
    void usarLimite(){
        cout<<"usando limite especial.\n";
        //pode chamar depositar pois herda de ContaPoupanca(protected)
        depositar();
    }
};

int main()
{
    ContaPoupanca cp;
    //ERRO: depositar é protected
    //cp.depositar();
    cp.aplicarJuros();//OK
    
    ContaEspecial ce;
    ce.usarLimite();//OK
    
    //ERRO: depositar não eh publico em ContaEspecial
    //ce.depositar();

    return 0;
}