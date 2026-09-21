
#include <iostream>
using namespace std;

class Pessoa{
public:
    string nome;
    int idade;
    
    Pessoa(string n,int i){
        nome = n;
        idade = i;
    }
};

int main()
{
    Pessoa p("Ana", 25);
    cout<<"Nome: "<<p.nome<<", idade: "<<p.idade<<endl;

    return 0;
}