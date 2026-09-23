/*7.Crie uma classe Funcionario com atributos nome e salario e método exibirSalario. Crie a classe Gerente que herda
privadamente de Funcionario e adiciona atributo departamento. No main, crie um gerente e use apenas métodos da
classe derivada para exibir todas as informações.*/
#include <iostream>
using namespace std;

class Funcionario{
private:
    string nome;
    double salario;
public:
    Funcionario(string nome, double salario){
        this->nome=nome;
        this->salario=salario;
    }
    
    void exibirSalario(){
        cout<<"nome: "<<nome<<"\nsalario: "<<salario<<endl;
    }
};

class Gerente : private Funcionario{
protected:
    string departamento;
public:
    Gerente(string nome,double salario, string departamento) : Funcionario(nome,salario){
        this->departamento=departamento;
    }
    
    void exibirInformações(){
        exibirSalario();
        cout<<"departamento: "<<departamento<<endl;
    }
};

int main()
{
    Gerente g("Breno",1200,"informatica");
    g.exibirInformações();

    return 0;
}