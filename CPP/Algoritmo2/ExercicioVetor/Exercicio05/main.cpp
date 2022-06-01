#include <iostream>
using namespace std;
#define TAM 5
void leitura(int vet[]){
    for(int i=0;i<TAM;i++){
        cout<< "Digite um valor ";
        cin >> vet[i];
    }
}
void reversao(int vet[], int reversa[]){
    int contador = 0;
    for(int i=TAM-1;i>=0;i--){
        reversa[i] = vet[contador];
        contador++;
    }
}
int main(){
    int vet[TAM], reversa[TAM];
    leitura(vet);
    reversao(vet, reversa);
    for(int i=0;i<TAM;i++){
        cout<<vet[i]<<endl;
    }
    for(int i=0;i<TAM;i++){
        cout<<reversa[i]<<endl;
    }
}
