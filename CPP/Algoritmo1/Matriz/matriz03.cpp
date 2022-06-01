#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 5
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int matriz[TAM][TAM], i, j, maior;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = rand() % 100+1;
            if (i==0 and j==0){
                maior = matriz[0][0];
            }else{
                if(matriz[i][j]>maior){
                    maior = matriz[i][j];
                }
            }
        }
    }
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout<< matriz[i][j]<<"\t";
        }
        cout << endl;
    }
    cout<< "\nMaior "<<maior;
	return 0;
}
