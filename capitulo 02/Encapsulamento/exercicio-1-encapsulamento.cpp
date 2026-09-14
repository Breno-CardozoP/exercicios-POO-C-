/*Crie uma classe Aluno com atributos privados nome e nota. 
Implemente getters e setters para acessar e modificar os valores. 
No main, leia o nome e a nota e mostre-os usando os métodos.*/
#include <iostream>
#include <string>
using namespace std;

class Aluno{
private:
    string nome;
    float nota;
public:
    //metodos getters e setters para acessar e modificar
    string getNome(){
        return nome;
    }
    
    void setNome(string nome){
         this->nome=nome;
    }
    
    float getNota(){
        return nota;
    }
    
    void setNota(float nota){
        if(nota<0){
            cout<<"nota invalida";
        }else{
            this -> nota=nota;
        }
    }
};

int main()
{
    Aluno a;
    string nomeTemp;
    float notaTemp;
    
    cout<<"insira o nome: "<<endl;
    getline(cin,nomeTemp);
    a.setNome(nomeTemp);//modificar o nome com o metodo set
    
    cout<<"insira a nota: "<<endl;
    cin>>notaTemp;
    a.setNota(notaTemp);//modificar a nota com o metodo set
    
    
    cout<<"imprimindo pessoa: "<<a.getNome()<<endl;//imprimir usando o metodo get
    cout<<"imprimindo nota: "<<a.getNota()<<endl;
    
    return 0;
}