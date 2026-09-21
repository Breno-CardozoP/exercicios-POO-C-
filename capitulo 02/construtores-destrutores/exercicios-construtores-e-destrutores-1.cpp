/*exercicios contrutores e destrutores 1*/
#include <iostream>
using namespace std;

class Carro{
public:
    string marca;
    float velocidade;
    
    Carro(string marca,float velocidade){
        this->marca=marca;
        this->velocidade=velocidade;
    }
    void exibir(){
        cout<<"marca do Carro: "<<marca<<", velocidade: "<<velocidade<<endl;
    }
};

int main()
{
    Carro c("mustang",240);
    c.exibir();

    return 0;
}