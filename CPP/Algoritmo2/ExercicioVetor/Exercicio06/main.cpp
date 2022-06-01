#include <iostream>
using namespace std;
#define TAM 30
void leitura(int vet[]){
    for(int i=0;i<TAM;i++){
        cout << "Digite um valor ";
        cin >> vet[i];
    }
}
int separar(int vet[]){
    int par = 0, impar = 0;
    for(int i = 0;i<TAM;i++){
        if (vet[i]%2==0){
            par += vet[i];
        }else{
            impar += vet[i];
        }
    }
    if (par>impar){
        return par;
    }else{
        return impar;
    }
}
int main(){
    int vet[TAM];
    leitura(vet);
    cout << separar(vet);
}
