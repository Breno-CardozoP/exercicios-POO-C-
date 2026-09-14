#include <iostream>
using namespace std;

class Pessoa {
    string nome;
    int idade;
    
public:
    string getNome() {
        return nome;
    }
    
    void setNome(string novoNome) {
        nome = novoNome;
    }
    
    int getIdade() {
        return idade;
    }
    
    void setIdade(int novaIdade) {
        if(novaIdade >= 0) {
            idade = novaIdade;
        } else {
            cout << "Idade invalida:\n";
        }
    }
    
    void imprimir() {
        cout << nome << " tem " << idade << " anos.\n";
    }
};

int main() {
    Pessoa p;
    p.setNome("Joao");
    p.setIdade(25);
    p.imprimir();
    
    p.setIdade(-5); // tenta atribuir valor invalido

    return 0;
}