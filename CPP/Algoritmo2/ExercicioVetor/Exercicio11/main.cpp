#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 10
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
bool verificarBalanceada(int vet[]){
    int somaFirst = vet[0]+vet[TAM-1];
    int somaSecond = vet[1]+vet[TAM-2];
    int somaThird = vet[2]+vet[TAM-3];
    if (somaFirst == somaSecond and somaFirst == somaThird and somaSecond == somaThird){
        return true;
    }else{
        return false;
    }
}

int main(){
    cout << "Hello world!" << endl;
    return 0;
}
