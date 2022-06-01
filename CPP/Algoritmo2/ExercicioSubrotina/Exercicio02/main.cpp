#include <iostream>
using namespace std;
int formula(int inicio, int fim){
    int soma = 0, aux = fim;
    for (fim; fim>=inicio;fim--){
        soma += aux/inicio;
    }
    return soma;
}
int exercicio(int x){
    int soma = 0;
    for(int i = x;i>0;i--){
        soma += x/i;
    }
    return soma;
}
int main(){
    int soma = 0;
    cout << formula(5, 15);
    for(int i=5;i<=15;i++){
        cout << exercicio(i) << endl;
        soma += exercicio(i);
    }
    cout << soma;
}
