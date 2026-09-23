
#include <iostream>
using namespace std;

class Animal{
public:
    virtual void fazerSom(){
        cout<<"Som generico de animal\n";
    }
};

class Cachorro : public Animal{
public: 
    void fazerSom() override{
        cout<<"Latido\n";
    }
};

class Gato : public Animal{
public:
    void fazerSom() override{
        cout<<"Miau\n";
    }
};
//função que aceita qualquer animal por referencia
void emitirSomDoAnimal(Animal& animalGenerico){
    //C++ vai descobrir em tempo de execução qual é o animal real 
    animalGenerico.fazerSom();
}

int main()
{
    Cachorro c;
    Gato g;
    
    //chamada dinamica ocorrendo atravez da função externa
    emitirSomDoAnimal(c);//saida Latido
    emitirSomDoAnimal(g);//emitir Miau

    return 0;
}