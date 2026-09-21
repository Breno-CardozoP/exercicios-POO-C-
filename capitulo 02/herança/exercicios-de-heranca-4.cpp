/*Crie uma classe Livro com atributos titulo e autor e método exibirInfo. 
Crie a classe LivroDigital que herda publicamente de Livro e adiciona atributo 
tamanhoMB e método download. No main, crie um livro digital e use todos os métodos.*/
#include <iostream>
using namespace std;

class Livro{
public:
    string titulo;
    string autor;
    
    void exibirInfo(){
        cout<<"titulo: "<<titulo;
        cout<<"\nautor: "<<autor<<endl;
    }
};

class LivroDigital : public Livro{
public:
    float tamanhoMB;
    
    void download(){
        cout<<"download iniciado("<<tamanhoMB<<"mb)";
    }
};

int main()
{
    LivroDigital ld;
    ld.titulo="livro1";
    ld.autor="autor1";
    ld.tamanhoMB=5;
    
    ld.exibirInfo();
    ld.download();

    return 0;
}