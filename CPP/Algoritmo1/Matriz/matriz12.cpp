#include <iostream>
using namespace std;
#define TAM 5
int main(){
    int matriz[TAM][TAM], i, j;
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            switch (i){
                case 0:
                    matriz[i][j]=j*2;
                    break;
                case 1:
                    matriz[i][j]=i+j;
                    break;
                case 2:
                    matriz[i][j]=j*2+10;
                    break;
                case 3:
                    matriz[i][j]=i+j+10;
                    break;
                case 4:
                    matriz[i][j]=j*2+20;
                    break;
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
