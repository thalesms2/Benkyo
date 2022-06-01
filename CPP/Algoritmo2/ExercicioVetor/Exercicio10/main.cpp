#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 20
void random(int vet[]){
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0;i<TAM;i++){
        bool repeat = false;
        vet[i] = rand() % 100+1;
        for(int j = i-1;j>=0;j--){
            if (vet[i]==vet[j]){
                repeat = true;
            }
        }
        if (repeat == true){
            i--;
        }
    }
}
int menor(int vet[]){
    int menor = vet[0];
    for(int i=0;i<TAM;i++){
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
    return menor;
}
void ordenarDesc(int vet[]){
    for(int i = 0;i<TAM;i++){
        for(int j = i;j>=0;j--){
            if (vet[j]<vet[i]){
                vet[i] = vet[i]+vet[j];
                vet[j] = vet[i]-vet[j];
                vet[i] = vet[i]-vet[j];
                i--;
            }
        }
    }
}
void ordenarCresc(int vet[]){
    for(int i = 0;i<TAM;i++){
        for(int j = i;j>=0;j--){
            if (vet[j]>vet[i]){
                vet[i] = vet[i]+vet[j];
                vet[j] = vet[i]-vet[j];
                vet[i] = vet[i]-vet[j];
                i--;
            }
        }
    }
}
int verificarPos(int vet[], int num){
    for(int i=0;i<TAM;i++){
        if(vet[i]==num){
            return i+1;
        }else{
            return -1;
        }
    }
}

int main(){
    int vet[TAM];
    random(vet);
    for(int i=0;i<TAM;i++){
        cout << ">> " << vet[i] << endl;
    }
    ordenarCresc(vet);
    cout<< "Vetor ordenado " <<endl;
    for(int i=0;i<TAM;i++){
        cout << ">> " << vet[i] << endl;
    }
}
