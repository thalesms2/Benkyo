#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 5
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int matriz[TAM][TAM], i, j, linha[TAM] ={}, coluna[TAM]={}, soma=0, menor, maior;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100+1;
			if(j==0){
				linha[i] = matriz[i][j];
			}
			if(matriz[i][j]>linha[i]){
				linha[i]=matriz[i][j];
			}
			
        }
    }
	for(j=0;j<TAM;j++){
        for(i=0;i<TAM;i++){
			if(i==0){
				coluna[j] = matriz[i][j];
			}
			if(matriz[i][j]<coluna[j]){
				coluna[j]=matriz[i][j];
			}
		}
	}
	for(i=0;i<TAM;i++){
		cout<< "\nColuna "<<coluna[i]<< "\t Linha "<<linha[i];
	}
	return 0;
}
