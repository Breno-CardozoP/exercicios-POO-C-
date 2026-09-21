/*Crie uma classe Animal com método fazerSom. 
Crie a classe Cachorro que herda publicamente de Animal e 
adiciona método latir. No main, crie um cachorro e faça ele usar os dois métodos.*/
#include <iostream>
using namespace std;

class Animal{
public:
    void fazerSom(){
        cout<<"som sendo feito:\n";
    }
};

class Cachorro : public Animal{
public:
    void latir(){
        cout<<"Bark";
        
    }
};

int main()
{
    Cachorro c;
    c.fazerSom();
    c.latir();

    return 0;
}