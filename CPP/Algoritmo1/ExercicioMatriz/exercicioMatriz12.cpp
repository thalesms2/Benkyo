#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int vetor1[TAM], vetor2[TAM], vetor3[TAM], i, i2, cont=0, cont2;
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
	for (i=0;i<TAM;i++){
        for(i2=i;i2>=0;i2--){
            if(vetor1[i]==vetor2[i2]){ //Verifica se já há o numero no vetor final
                vetor3[cont]=vetor1[i];
                cont++;
                for(cont2=i2;cont2<TAM;cont2++){
                    vetor1[cont2]=vetor1[cont2+1];
                }
            }
        }
        for(i2=(i-cont);i2>=0;i2--){
            if(vetor2[i]==vetor1[i2]){
                vetor3[cont]=vetor2[i];
                cont++;
            }
        }
	}
	cout<< "Vetor";
	for (i=0;i<cont;i++){
        cout << " - " <<vetor3[i];
	}
	return 0;
}
