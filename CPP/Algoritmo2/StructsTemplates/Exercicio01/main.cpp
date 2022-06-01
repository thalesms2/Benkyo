#include <iostream>
#include <windows.h>
#include <codefun.h>
using namespace std;

template <typename num>
struct fracao{
    num numerador, denominador;
};

int proxNumPrimo(int numPrimo){
    bool pass = false;
    for(int i=numPrimo+1;i==numPrimo;i++){
        for(int j=i;j>0;j--){
            if(i%j==0){
                if(j!=i or j!=1){

                }
            }
        }
    }
}

template <typename num>
istream & operator + (istream & is, fracao<num> conta1, fracao<num> conta2){
    int numPrimo = 2;
    if(conta1.denominador == conta2.denominador){
        is >> conta1.numerador+conta2.numerador;
    }else{

    }
    return is;
}

int main(){

}
