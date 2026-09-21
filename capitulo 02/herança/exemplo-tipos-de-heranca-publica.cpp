
#include <iostream>
using namespace std;

//classe base
class veiculo{
public:
    void mover(){//metodo publico visivel para qualquer um
        cout<<"o veiculo esta se movendo\n";
    }
protected:
    //metodo protegido visivel somente para a classe e derivados
    void abastecer(){
        cout<<"o veiculo esta sendo abastecido\n";
    }
private:
    void dadosinternos(){//metodo privado inacessivel fora da classe
        cout<<"dados internos do veiculoz\n";
    }
};

//classe derivada com herança publica
class carro : public veiculo{
public:
    void buzinar(){
        cout<<"buzina: BEEP\n";
    }
    void prepararViagem(){
        //podemos chamar metodos publicos e protegidos herdados
        abastecer();//permitido metodo protegido
        mover();//permitido metodo publico
    }
};

int main()
{
    carro c;
    
    //metodos herdados como publicos continuam publicos
    c.mover();//OK: publicos
    c.buzinar();//OK: metodo proprio
    
    //ERRO: protegido,não acessivel diretamento fora da classe
    //c.abastecer();
    
    //ERRO: privado na base não herdado
    //c.dadosinternos();

    return 0;
}