#include <iostream>
using namespace std;
#define TAM 10
int fatorial(int num){
    int fat = 1;
    for(int i = num;i>0;i--){
        fat *= i;
    }
    return (fat);
}
void leitura(int vet[]){
    for (int i = 0;i<TAM;i++){
        cout << "Informe o numero " << endl;
        cin >> vet[i];
    }
}
int maior(int vet[]){
    int maior = vet[0];
    for (int i = 0;i<TAM;i++){
        if(vet[i]>maior){
            maior = vet[i];
        }
    }
}
int menor(int vet[]){
    int menor = vet[0];
    for (int i =0;i<TAM;i++){
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
}
int main(){
    int vet[TAM];
    leitura(vet);
    cout << fatorial(maior(vet)) << endl;
    cout << fatorial(menor(vet)) << endl;
}
