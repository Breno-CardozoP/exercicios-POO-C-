/*Crie uma classe Dispositivo com método ligar. 
Crie a classe Telefone que herda publicamente de Dispositivo e adiciona método fazerChamada. 
Crie a classe Smartphone que herda publicamente de Telefone e adiciona método acessarInternet. 
No main, crie um smartphone e use todos os métodos herdados e próprios.*/
#include <iostream>
using namespace std;

class Dispositivo{
public:
    void ligar(){
        cout<<"ligando"<<endl;
    }
};

class Telefone : public Dispositivo{
public:
    void fazerChamada(){
        cout<<"fazendo chamada"<<endl;
    }
};

class Smartphone : public Telefone{
public:
    void acessarInternet(){
        cout<<"acessando a internet"<<endl;
    }
};

int main()
{
    Smartphone s;
    s.ligar();
    s.fazerChamada();
    s.acessarInternet();

    return 0;
}