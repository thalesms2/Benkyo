#include <iostream>
using namespace std;
#define TAM 5
int main() {
	int i, vetor[TAM], maior, menor, maiorPos = 0, menorPos = 0;
	bool find;
	for (i=0;i<TAM;i++){
		cin >> vetor[i];
		for (int i2 = i; i2>=0; i2--){
			if (find==false and i!=i2){
				if (vetor[i]==vetor[i2]){
					cout << "\n Valor "<<vetor[i]<< " nas posicoes "<<i<<" - "<< i2 << "\n"; 
					i2=-1;
					find=true;
				}
			}
		}
	}
	maior = vetor[0];
	menor = vetor[0];
	for(i=0;i<TAM;i++){
		if(vetor[i]>maior){
			maior = vetor[i];
			maiorPos = i;
		}
		if(vetor[i]<menor){
			menor = vetor[i];
			menorPos = i;
		}
	}
	cout << "\n Maior " << maior << " Pos " << maiorPos;
	cout << "\n Menor " << menor << " Pos " << menorPos;
  return 0;
}