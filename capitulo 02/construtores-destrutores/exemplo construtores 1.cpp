
#include <iostream>
using namespace std;

class Pessoa{
public:
    string nome;
    int idade;
    
    Pessoa(){
        nome = "Sem nome";
        idade = 0;
    }
};

int main()
{
    Pessoa p;
    cout<<"nome: "<<p.nome<<", idade: "<<p.idade<<endl;

    return 0;
}