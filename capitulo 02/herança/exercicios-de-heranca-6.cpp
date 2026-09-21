/*Crie uma classe Conta com atributos titular e saldo e método exibirSaldo. 
Crie a classe ContaEspecial que herda privadamente de Conta e adiciona atributo limite. 
No main, crie uma conta especial e use os métodos e atributos da derivada para exibir as informações.*/
#include <iostream>
#include <string>
using namespace std;

class Conta {
protected:
    string titular;
    double saldo;

public:
    // Construtor que inicializa os atributos da base
    Conta(string titular, double saldo) {
        this->titular = titular;
        this->saldo = saldo;
    }

    void exibirSaldo() {
        cout << "Titular: " << titular << "\nSaldo: " << saldo << endl;
    }
};

class ContaEspecial : private Conta {
private:
    double limite;

public:
    // O construtor da derivada repassa titular e saldo para o construtor da base
    ContaEspecial(string titular, double saldo, double limite) : Conta(titular, saldo) {
        this->limite = limite;
    }

    void exibirInformacoes() {
        exibirSaldo(); // Chama o método da classe Conta
        cout << "Limite: " << limite << endl;
    }
};

int main() {
    // Instancia a classe passando os 3 valores no construtor
    ContaEspecial ce("Breno", 1200.0, 2000.0);
    
    ce.exibirInformacoes();

    return 0;
}