#include <iostream>

using namespace std;
void maior(int peso[25]){
    int maior = peso[0];
    for(int i=0;i<25;i++){
        if(peso[i]>maior){
            maior = peso[i];
        }
    }
    cout << "O maior peso registrado eh " << maior << endl;
}
void menor(int peso[25]){
    int menor = peso[0];
    for(int i=0;i<25;i++){
        if(peso[i]<menor){
            menor = peso[i];
        }
    }
    cout << "O menor peso registrado eh " << menor << endl;

}
int leitura(){
    int peso;
    cout << "Informe o peso ";
    cin >> peso;
    return peso;
}
int main(){
    int peso[25];
    for(int i=0;i<25;i++){
        peso[i] = leitura();
    }
    maior(peso);
    menor(peso);
}
