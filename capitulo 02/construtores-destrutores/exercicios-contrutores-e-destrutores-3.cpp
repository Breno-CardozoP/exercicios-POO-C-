
#include <iostream>
using namespace std;

class ContaBancaria{
private:
    string titular;
    double saldo;
public:
    ContaBancaria(string titular,double saldo){
        this->titular=titular;
        this->saldo=saldo;
    }
    ~ContaBancaria(){
        cout<<"Conta foi encerrada"<<endl;
    }
    void exibir(){
        cout<<"titular: "<<titular<<", saldo: "<<saldo<<endl;
    }
};

int main()
{
    ContaBancaria c("breno",200);
    c.exibir();

    return 0;
}