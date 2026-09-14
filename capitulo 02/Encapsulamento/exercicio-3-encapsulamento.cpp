/*Crie uma classe Conta com atributos privados titular e saldo. 
Implemente getters e setters. No setter do saldo, impeça valores negativos. 
No main, leia titular e saldo e mostre os dados.*/
#include <iostream>
#include <string>
using namespace std;

class Conta{
private:
    string titular;
    double saldo;
public:
    //metodos getters e setters para acessar e modificar
    string getTitular(){
        return titular;
    }
    void setTitular(string titular){
        this->titular=titular;
    }
    
    double getSaldo(){
        return saldo;
    }
    void setSaldo(double saldo){
        if(saldo<0){
            cout<<"valor invalido: Saldo negativo";
        }else{
            this->saldo=saldo;
        }
    }
};

int main()
{
    string titularTemp;
    double saldoTemp;
    Conta c;
    
    cout<<"insira o titular: "<<endl;
    getline(cin,titularTemp);
    c.setTitular(titularTemp);//modificar o nome com o metodo set
    
    cout<<"insira o saldo: "<<endl;
    cin>>saldoTemp;
    c.setSaldo(saldoTemp);//modificar o saldo com o metodo set
    
    cout<<"imprimindo titular: "<<c.getTitular()<<endl;//imprimir usando o metodo get
    cout<<"imprimindo saldo: "<<c.getSaldo()<<endl;

    return 0;
}