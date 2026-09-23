
#include <iostream>
using namespace std;

class Calculadora{
public:
    int soma(int a , int b){
        return a + b;
    }
    double soma(double a , double b){
        return a + b;
    }
    int soma(int a, int b, int c){
        return a + b + c;
    }
};

int main()
{
    Calculadora calc;
    
    //chama soma(int,int)
    cout<<calc.soma(2,3)<<endl;
    //chama soma(double,double)
    cout<<calc.soma(2.5,3.1)<<endl;
    //chama soma(int,int,int)
    cout<<calc.soma(1,2,3)<<endl;

    return 0;
}