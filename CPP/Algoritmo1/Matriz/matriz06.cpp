#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 5
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int matriz[TAM][TAM], i, j, linha[TAM] ={}, coluna[TAM]={}, soma=0;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100+1;
			coluna[j]+=matriz[i][j];
			linha[i]+=matriz[i][j];
        }
    }
	for(i=0;i<TAM;i++){
		cout<< "\nColuna "<<coluna[i]<< "\t Linha "<<linha[i];
	}
	return 0;
}
