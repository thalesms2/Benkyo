#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 4
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int matriz[TAM][TAM], i, j, soma=0;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100+1;
            if (i+j==TAM-1){
                soma +=matriz[i][j];a
            }
        }
    }
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout<< matriz[i][j]<<"\t";
        }
        cout << endl;
    }
    cout<< "\nSoma "<<soma;
	return 0;
}
