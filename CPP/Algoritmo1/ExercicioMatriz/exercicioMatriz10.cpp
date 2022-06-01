#include <iostream>
using namespace std;
#define TAM 6
int main() {
	int vetor[TAM], i, maior, menor, maiorPos, menorPos, soma;
	bool dont;
	for (i=0;i<TAM;i++){
        cin >> vetor[i];
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
            maiorPos = 0;
            menorPos = 0;
        }else{
            if (vetor[i]>maior){
                maior = vetor[i];
                maiorPos = i;
            }
            if (vetor[i]<menor){
                menor = vetor[i];
                menorPos = i;
            }
        }
	}
	soma = maior + menor;
	cout << "\nsoma " << soma << " " << maior << "+" << menor;
	for(i=maiorPos;i<TAM;i++){
        vetor[i] = vetor [i+1];
	}
	for(i=menorPos;i<TAM;i++){
        vetor[i] = vetor [i+1];
	}
	for (i=0;i<TAM-2;i++){
        if(i==0){
            maior = vetor[i];
            menor = vetor[i];
            maiorPos = 0;
            menorPos = 0;
        }else{
            if (vetor[i]>maior){
                maior = vetor[i];
                maiorPos = i;
            }
            if (vetor[i]<menor){
                menor = vetor[i];
                menorPos = i;
            }
        }
	}
    cout << "\nsoma " << soma << " " << maior << "+" << menor;
    for(i=maiorPos;i<TAM;i++){
        vetor[i] = vetor [i+1];
	}
	for(i=menorPos;i<TAM;i++){
        vetor[i] = vetor [i+1];
	}
	if (soma == (maior+menor)){
        for (i=0;i<TAM-4;i++){
            if(i==0){
                maior = vetor[i];
                menor = vetor[i];
                maiorPos = 0;
                menorPos = 0;
            }else{
                if (vetor[i]>maior){
                    maior = vetor[i];
                    maiorPos = i;
                }
                if (vetor[i]<menor){
                    menor = vetor[i];
                    menorPos = i;
                }
            }
        }
	}else{
        cout << "\nNao e balanceado";
        dont = true;
	}
    if(dont == false){
        cout << "\nsoma " << soma << " " << maior << "+" << menor;
        if (soma == (maior+menor)){
            cout << "\nVetor e balanceado";
        }else{
            cout << "\nNao e balanceado";
        }
    }
    return 0;
}
