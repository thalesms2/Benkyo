#include <iostream>
using namespace std;
#define TAM 5
int main(){
    int matriz[TAM][TAM]={}, i, j, cont=0;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if (cont%2!=0){
                matriz[i][j] = 1;
            }
            cont++;
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
