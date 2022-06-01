#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 20
int main() {
	srand(static_cast<unsigned int>(time(0)));
	float matriz[TAM][TAM], soma[TAM]={}, resultante[TAM][TAM];
	int i, j;
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			matriz[i][j] = rand() % 10+1;
			soma[i] += matriz[i][j];
		}
	}
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			resultante[i][j] = matriz[i][j]*soma[i];
		}
	}
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			cout << "\t" << resultante[i][j];
		}
		cout << endl;
	}
}