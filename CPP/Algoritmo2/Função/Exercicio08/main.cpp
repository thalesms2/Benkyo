#include <iostream>
using namespace std;
int valor(int v[10]){
    int contador;
    for(int i=0;i<10;i++){
        if(idade>=18){
            contador++;
        }
    }
    return contador;
}
int main(){
    int vet[10];
    for(int i =0;i<10;i++){
        cin << vet[i];
    }
    cout << valor(vet);
}
