#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 10
void leitura(int vet[]){
    srand(static_cast<unsigned int>(time(0)));
    for(int i = 0;i<TAM;i++){
        vet[i] = rand() % 100+1;
    }
}
int main(){
    int vet[TAM];
    leitura(vet);
    for(int i = 0;i<TAM;i++){
        cout << vet[i] << endl;
    }
}
