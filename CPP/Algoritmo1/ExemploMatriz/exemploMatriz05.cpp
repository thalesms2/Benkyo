#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 3
int main() {
    int matriz[TAM][TAM], i, j, soma=0;
    srand(static_cast<unsigned int>(time(0)));
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100;
        }
    }
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if (i==j or (i+j)==TAM-1){
            }else{

                soma +=matriz[i][j];
            }
        }
    }
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout <<  matriz[i][j] << "\t";
        }
        cout<<endl;
    }
    cout<< "\n" << soma;
	return 0;
}
