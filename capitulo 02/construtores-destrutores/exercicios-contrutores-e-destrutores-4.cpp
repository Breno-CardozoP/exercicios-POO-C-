/*Crie uma classe Funcionario com atributos nome e salario. O construtor inicializa os atributos e define salário 0 se negativo. 
O destrutor exibe uma mensagem de despedida. No main, crie um funcionário e exiba os valores.*/
#include <iostream>
using namespace std;

class Funcionario{
private:
    string nome;
    double salário;
public:
    Funcionario(string nome,double salário){
        this->nome=nome;
        if(salário<0){
            this->salário=0;
        }else{
            this->salário=salário;
        }
        
    }
    ~Funcionario(){
        cout<<"adeus"<<endl;
    }
    void exibir(){
        cout<<"nome: "<<nome<<", salário: "<<salário<<endl;
    }
};

int main()
{
    Funcionario p("breno",1200);
    p.exibir();

    return 0;
}