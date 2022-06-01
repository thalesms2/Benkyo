#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 5
int main() {
	srand(static_cast<unsigned int>(time(0)));
	int matriz[TAM][TAM], i, j, soma=0;
	for (i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			matriz[i][j] = rand() % 10+1;
		}
	}
}