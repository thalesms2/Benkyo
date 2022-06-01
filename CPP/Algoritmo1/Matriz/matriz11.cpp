#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define TAM 3
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int matriz[TAM][TAM], i, j, j2=TAM-1, i2=0, rot[TAM][TAM];
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = rand() % 10+1;
            rot[i2][j2] = matriz[i][j];
            i2++;
        }
        j2--;
        i2=0;
    }
    cout << "\nMatriz normal\n";
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout << "\t"<<matriz[i][j];
        }
        cout << endl;
    }
    cout << "\nMatriz rotacionada\n";
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
        cout << "\t"<<rot[i][j];
        }
        cout << endl;
    }
    return 0;
}
