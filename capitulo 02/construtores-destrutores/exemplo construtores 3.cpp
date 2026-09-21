
#include <iostream>
using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
public:
    Pessoa(){
        nome = "Desconhecido";
        idade = 0;
    }
    Pessoa(string n){
        nome = n;
        idade = 0;
    }
    
    Pessoa(string n, int i){
        nome =n;
        idade=i;
    }
    
    void exibir(){
        cout<<"nome: "<<nome<<", idade: "<<idade<<endl;
    }
};

int main()
{
    Pessoa p1;//construtor sem parametros
    Pessoa p2("Maria");//construtor com 1 parametro
    Pessoa p3("joão",25);//construtor com 2 parametros
    
    p1.exibir();
    p2.exibir();
    p3.exibir();

    return 0;
}