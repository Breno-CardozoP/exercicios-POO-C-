/*Crie uma classe Aluno com atributos privados nome e nota. 
Implemente getters e setters usando this para diferenciar o atributo do parâmetro. 
No main, leia e mostre os dados.*/
#include <iostream>
#include <string>
using namespace std;

class Aluno{
private:
    string nome;
    float nota;
public:
    //metodos getters e setters usando this para acessar e modificar
    string getNome(){
        return this->nome;
    }
    
    void setNome(string nome){
         this->nome=nome;
    }
    
    float getNota(){
        return this->nota;
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