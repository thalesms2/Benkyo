#include <iostream>
using namespace std;
int calc(int base, int expoente){
    int resultado = 1;
    while(expoente>0){
        resultado *= base;
        expoente--;
    }
    return resultado;
}
int main(){
    int base, expoente;
    cin >> base >> expoente;
    cout << calc(base, expoente);
}
