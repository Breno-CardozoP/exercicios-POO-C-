/*Crie uma classe Pessoa com atributos nome e idade e método apresentar. 
Crie a classe Aluno que herda publicamente de Pessoa e adiciona atributo nota. 
No main, crie um aluno e exiba nome, idade e nota usando os métodos apropriados.*/
#include <iostream>
using namespace std;

class Pessoa{
public:
    string nome;
    int idade;
    
    void apresentar(string nome,int idade){
        cout<<"Prazer, sou "<<nome<<" tenho "<<idade;
    }
};

class Aluno : public Pessoa{
public:
    float nota;
    
    void apresentarNota(float nota){
        cout<<"\nnota: "<<nota;
    }
};

int main()
{
    Aluno a;
    a.apresentar("Breno",18);
    a.apresentarNota(9);

    return 0;
}