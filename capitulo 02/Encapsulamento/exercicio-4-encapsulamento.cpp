/*Crie uma classe Funcionario com atributos privados nome, salario e departamento. 
Use getters e setters. Valide que salário não seja negativo. No main, leia e mostre os dados.*/
#include <iostream>
#include <string>
using namespace std;

class Funcionario{
private:
    string nome;
    double salario;
    string departamento;
public:
    //metodos getters e setters para acessar e modificar
    string getNome(){
        return nome;
    }
    void setNome(string nome){
        this->nome=nome;
    }
    
    double getSalario(){
        return salario;
    }
    void setSalario(double salario){
        if(salario<0){
            cout<<"salario invalido: negativo";
        }else{
            this -> salario=salario;
        }
    }
    
    string getDepartamento(){
        return departamento;
    }
    void setDepartamento(string departamento){
         this->departamento=departamento;
    }
};


int main()
{
    Funcionario f;
    string nomeTemp;
    double salarioTemp;
    string departamentoTemp;
    
    cout<<"insira o nome: "<<endl;
    getline(cin,nomeTemp);
    f.setNome(nomeTemp);//modificar o nome com o metodo set
    
    cout<<"insira o salario: "<<endl;
    cin>>salarioTemp;
    cin.ignore();
    f.setSalario(salarioTemp);//modificar o salario com o metodo set
    
    cout<<"insira o departamento: "<<endl;
    getline(cin,departamentoTemp);
    f.setDepartamento(departamentoTemp);//modificar o nome com o metodo set
    
    
    cout<<"imprimindo nome: "<<f.getNome()<<endl;//imprimir usando o metodo get
    cout<<"imprimindo salario: "<<f.getSalario()<<endl;
    cout<<"imprimindo departamento: "<<f.getDepartamento()<<endl;

    return 0;
}