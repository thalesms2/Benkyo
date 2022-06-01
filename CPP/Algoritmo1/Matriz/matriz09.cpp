#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 5
int main() {
	srand(static_cast<unsigned int>(time(0)));
	int x[TAM][TAM], y[TAM][TAM], w[TAM][TAM], i,j, diagonalPrincipal[TAM], soma[TAM]={}, menor, pos;
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			x[i][j] = rand() % 10+1;
			y[i][j] = rand() % 10+1;
			if(i==j){
				diagonalPrincipal[i] = x[i][j];
			}
			soma[j] += y[i][j];
		}
	}
	for(i=0;i<TAM;i++){
		if(i==0){
			menor = soma[i];
			pos = 0;
		}
		if(soma[i]<menor){
			menor = soma[i];
			pos = i;
		}
	}
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			if(x[i][j]<=y[i][j]){
				w[i][j] = x[i][j];
			}else{
				w[i][j] = y[i][j];
			}
		}
	}
}