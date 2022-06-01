#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int vetor1[TAM], vetor2[TAM], vetor3[TAM*2], i, i2, cont=0,contVet=0;
  bool hasInHere;
	for (i=0;i<TAM;i++){ //Add in vectors
		cin >> vetor1[i];
		for(i2=i;i2>=0;i2--){ //Check duplicidade
            if(i2==i){
            }else{
                if(vetor1[i]==vetor1[i2]){
                    cout << "Duplicidade\n";
                    cin >> vetor1[i];
                }
            }
		}
		cin >> vetor2[i];
		for(i2=i;i2>=0;i2--){
            if(i2==i){
            }else{
                if(vetor2[i]==vetor2[i2]){
                    cout << "Duplicidade\n";
                    cin >> vetor2[i];
                }
            }
		}
	}
	for (i=0;i<TAM*2;i++){
        if((i%2)==0){ //Alterna entre os dois vetores
            for(i2=cont;i2>=0;i2--){
                if(hasInHere==true){ //Check se anteriormente há um numero repetido
                    cont--; //Diminui uma posição do vetor final
                    hasInHere= false; //Reseta o estado
                }
                if(vetor3[i2]==vetor1[contVet]){ //Verifica se já há o numero no vetor final
                    hasInHere = true;
                }
            }
            if(hasInHere==false){ //Depois de verificado adiciona o valor caso não haja duplicidade
                vetor3[cont]= vetor1[contVet];
            }
            cont++; //Passa para a proxima posição do vetor final
        }else{
            for(i2=cont;i2>=0;i2--){
                if(hasInHere==true){
                    cont--;
                    hasInHere= false;
                }
                if(vetor3[i2]==vetor2[contVet]){
                    hasInHere = true;
                }
            }
            if(hasInHere==false){
                vetor3[cont]= vetor2[contVet];
            }
            contVet++; //Contador dos vetores somados
            cont++;
        }
	}
	cout<< "Vetor";
	for (i=0;i<cont;i++){
        cout << " - " <<vetor3[i];
	}
	return 0;
}
