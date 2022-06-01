#include <iostream>
using namespace std;
#define TAM 5
void leitura(int vet[]){
    for(int i = 0;i<TAM;i++){
        cout << ">> ";
        cin >> vet[i];
    }
}
int verificar(int vet[], int res[]){
    int cont = 0;
    for(int i = 0;i<TAM;i++){
        if (vet[i]==7){
            res[cont] = i+1;
            cont++;
        }
    }
    return cont;
}
int main(){
    int vet[TAM], res[TAM];
    leitura(vet);
    int cont = verificar(vet, res);
    cout << "---" << endl;
    cout << cont << endl;
    cout << "---" << endl;
    for(int i = 0;i<cont;i++){
        cout << ">> " << res[i] << endl;
    }
}
