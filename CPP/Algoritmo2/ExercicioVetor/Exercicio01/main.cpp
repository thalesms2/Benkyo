#include <iostream>
using namespace std;
void leitura(int limit,int numero[]){
    for (int i = 0;i<limit;i++){
        cin >> numero[i];
    }
}
int media(int tam, int numero[]){
    int soma = 0, media;
    for (int i=0;i<tam;i++){
        soma+=numero[i];
    }
    media = soma/tam;
    return (float) media;
}
int maior(int tam, int numero[]){
    int maior;
    for (int i = 0;i<tam;i++){
        if(i==0){
            maior = numero[i];
        }
        if(numero[i]>maior){
            maior = numero[i];
        }
    }
    return maior;
}
int menor(int tam, int numero[]){
    int menor;
    for (int i = 0;i<tam;i++){
        if(i==0){
            menor = numero[i];
        }
        if(numero[i]<menor){
            menor = numero[i];
        }
    }
    return menor;
}
int main(){
    int numero[10];
    leitura(10, numero);
    cout << "A media eh " << media(10, numero) << " o maior valor encontrado foi " << maior(10, numero) << ", e o menor valor encontrado eh " << menor(10, numero);
}
