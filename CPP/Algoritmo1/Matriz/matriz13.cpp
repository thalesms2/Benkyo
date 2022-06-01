#include <iostream>
using namespace std;
#define TAM 5
int main(){
    int matriz[TAM][TAM]={}, i, j, cont=0;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if (i==j or i<j){
                cont++;
                matriz[i][j] = cont;
            }
        }
    }
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout << "\t" << matriz[i][j];
        }
        cout << endl;
    }
    return 0;
}
