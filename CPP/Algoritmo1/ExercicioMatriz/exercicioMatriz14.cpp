#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int vetor1[TAM], vetor2[TAM], vetor3[TAM], i, i2, contVet=0;
	for (i=0;i<TAM;i++){ //Add in vectors
		cin >> vetor1[i];
		for(i2=i;i2>=0;i2--){ //Check duplicity
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
        if((i%2)==0){
            vetor3[i] = vetor1[contVet];
        }else{
            vetor3[i] = vetor2[contVet];
            contVet++;
        }
    }
	cout<< "Vetor";
	for (i=0;i<TAM*2;i++){
        cout << " - " <<vetor3[i];
	}
	return 0;
}
