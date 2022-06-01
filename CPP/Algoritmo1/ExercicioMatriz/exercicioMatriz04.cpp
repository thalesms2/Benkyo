#include <iostream>
using namespace std;
#define TAM 3
int main() {
	int vetor[TAM], par[TAM], impar[TAM], i, somaPar = 0, somaImpar = 0;
	for (i=0;i<TAM;i++){
		cin >> vetor[i];
		if ((vetor[i]%2)==0){
			par[i] = vetor[i];
		}else{
			impar[i] = vetor[i];
		}
		somaPar += par[i];
		somaImpar += impar[i];
	}
	if (somaPar>somaImpar){
		cout << "\n"<< somaPar;
	}else{
		cout << "\n"<< somaImpar;
	}
  return 0;
}