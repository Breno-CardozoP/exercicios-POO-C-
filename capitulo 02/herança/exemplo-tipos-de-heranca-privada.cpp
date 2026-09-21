
#include <iostream>
using namespace std;

class Motor{
public:
    void ligar(){
        cout<<"Motor ligado.\n";
    }
protected:
    void ajustar(){
        cout<<"Motor ajustado.\n";
    }
private:
    void diagnosticar(){
        cout<<"diagnostico interno do motor\n";
    }
};

class Barco : private Motor{//herença privada
public:
    void navegar(){
        ligar();//OK: metodo herdado privado acessivel internamente
        ajustar();//OK: metodo herdado privado acessivel internamente
        cout<<"Navegando...\n";
    }
};

int main()
{
    Barco b;
    b.navegar();//funciona normalmente
    
    //b.ligar(); Erro: ligar é privado em Barco
    //b.ajustar(); Erro: ajustar é privado em Barco

    return 0;
}