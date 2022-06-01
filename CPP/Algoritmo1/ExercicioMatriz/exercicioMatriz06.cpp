#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int i, vetor[TAM], quant=0;
	for (i=0;i<TAM;i++){
		cin >> vetor[i];
	}
	for (i=0;i<TAM;i++){
		if (vetor[i]==7){
			cout << "\nO numero 7 foi localizado na posicao: " << i;
			quant++;
		}
	}
	cout << "\nFoi localizado " << quant << " numeros 7 no vetor";
	return 0;
}