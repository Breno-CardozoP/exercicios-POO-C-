/*Crie uma classe Livro com atributos titulo e autor. 
O construtor deve usar this para inicializar os atributos. 
O destrutor deve exibir uma mensagem informando que o livro foi descartado. 
No main, crie um livro e exiba seus valores.*/
#include <iostream>
using namespace std;

class Livro{
private:
    string titulo;
    string autor;
public:
    Livro(string titulo,string autor){
        this->titulo=titulo;
        this->autor=autor;
    }
    ~Livro(){
        cout<<"o livro foi descartado"<<endl;
    }
    void exibir(){
        cout<<"titulo: "<<titulo<<", autor: "<<autor<<endl;
    }
};

int main()
{
    Livro l("livro1","autor1");
    l.exibir();

    return 0;
}