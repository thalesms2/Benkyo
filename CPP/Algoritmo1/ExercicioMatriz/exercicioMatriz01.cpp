#import <iostream>
using namespace std;
#define TAM 3
int main (){
	int vetor[TAM], i, maior, menor, fatAux, fatorial=1;
	for (i = 0; i<TAM;i++){
		cin >> vetor[i];
	}
	maior = vetor[0];
	menor = vetor[0];
	for(i=0; i<TAM;i++){
		if(vetor[i]>maior){
			maior = vetor[i];
		}
		else if(vetor[i]<menor){
			menor = vetor[i];
		}
	}
	cout << "\nMaior\n";
	for(i=0;i<maior;i++){
		fatAux = maior-i;
		if(i==(maior-1)){
			cout << fatAux << " = ";
		}else{
			cout << fatAux << " * ";
		}
		fatorial *= fatAux;
	}
	cout << fatorial;
	fatorial = 1;
	cout << "\nMenor\n";
	for(i=0;i<menor;i++){
		fatAux = menor-i;
		if(i==(menor-1)){
			cout << fatAux << " = ";
		}else{
			cout << fatAux << " * ";
		}
		fatorial *= fatAux;
	}
	cout << fatorial;
}
