/*exercicios contrutores e destrutores 2*/
#include <iostream>
using namespace std;

class Produto{
public:
    string nome;
    float preco;
    
    Produto (string nome,float preco){
        this->nome=nome;
        if(preco<0){
            this->preco=0;
        }else{
            this->preco=preco;
        }
    }
    void exibir(){
        cout<<"nome: "<<nome<<", preço: "<<preco<<endl;
    }
};

int main()
{
    Produto p("lata",-2);
    p.exibir();
    

    return 0;
}