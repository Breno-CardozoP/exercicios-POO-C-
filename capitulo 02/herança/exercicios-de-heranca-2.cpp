/*Crie uma classe Veiculo com atributo velocidade e método mover. 
Crie a classe Carro que herda publicamente de Veiculo e adiciona atributo marca.
No main, crie um carro, defina velocidade e marca, e exiba os valores.*/
#include <iostream>
using namespace std;

class Veiculo{
public:
    float velocidade;
    
    void mover(float velocidade){
        cout<<"movendo-se a "<<velocidade;
    }
};

class Carro : public Veiculo{
public:
    string marca;
    
};

int main()
{
    Carro c;
    c.mover(60);
    c.marca="fox";
    cout<<"\nmarca: "<<c.marca;

    return 0;
}