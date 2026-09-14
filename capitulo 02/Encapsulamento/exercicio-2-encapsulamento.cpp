/*Crie uma classe Produto com atributos privados nome e preco. 
Use getters e setters. No setter do preço, verifique se o valor é positivo, 
caso contrário mostre mensagem de erro.*/
#include <iostream>
#include <string>
using namespace std;

class Produto{
private:
    string nome;
    float preco;
public:
    //metodos getters e setters para acessar e modificar
    string getNome(){
        return nome;
    }
    
    void setNome(string NovoNome){
         nome = NovoNome;
    }
    
    float getPreco(){
        return preco;
    }
    
    void setPreco(float NovoPreco){
        if(NovoPreco<0){
             cout<<"ERRO: valor invalido"<<endl;//verifica se o preço é positivo
        }else{
             preco=NovoPreco;
        }
    }

};

int main()
{
    Produto p;
    string n;
    float pr;
    
    cout<<"insira o nome e o preço do produto: ";
    getline(cin,n);
    cin>>pr;
    
    p.setNome(n);//modificando com o set
    p.setPreco(pr);
    
    cout<<"imprimindo nome: "<<p.getNome()<<endl;//imprimindo com o get
    cout<<"imprimindo preço: "<<p.getPreco()<<endl;
    

    return 0;
}