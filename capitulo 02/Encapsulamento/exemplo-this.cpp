#include <iostream>
using namespace std;

class Pessoa {
private:
    string nome;
public:
    Pessoa(string nome) {
        this->nome = nome; // usando 'this' para diferenciar o atributo do parâmetro
    }
    
    void enviarParaImpressao();
    
    string getNome() {
        return nome;
    }
};

void imprimir(Pessoa* p) {
    cout << "imprimindo pessoa: " << p->getNome() << endl;
}

void Pessoa::enviarParaImpressao() {
    imprimir(this); // this é um ponteiro para o objeto atual
}

int main() {
    Pessoa p1("maria");
    Pessoa p2("joao");
    
    p1.enviarParaImpressao(); // this -> &p1
    p2.enviarParaImpressao(); // this -> &p2
    return 0;
}