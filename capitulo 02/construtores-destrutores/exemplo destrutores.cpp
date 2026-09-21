
#include <iostream>
using namespace std;

class Pessoa{
public:
    Pessoa(){
        cout<<"Construtor chamado"<<endl;
    }
    ~Pessoa(){
        cout<<"destrutor chamado"<<endl;
    }
};

int main()
{
    Pessoa p;

    return 0;
}