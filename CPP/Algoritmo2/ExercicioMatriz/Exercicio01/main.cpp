#include <iostream>
using namespace std;
#define TAM 5
void makingMatrizJustOne(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            matriz[i][j] = 1;
        }
    }
}
void printMatriz(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
void makingMatrizDiag(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i==j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }
}
void cinMatriz(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            cout << ">> ";
            cin >> matriz[i][j];
        }
    }
}
void ajustarMatriz(int matriz[][TAM], matrizAlterada[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(matriz[i][j]>100){
                matriz[i][j] = 0;
            }
        }
    }
}
void fourth(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i>j){
                matriz[i][j] = 1;
            }
        }
    }
}
int fifth(int matriz[][TAM]){
    int soma  = 0;
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i!=j or TAM-1 != i+j){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}
int main(){
    int matriz[TAM][TAM], matrizAlterada[TAM][TAM];
    makingMatrizDiag(matriz);
    printMatriz(matriz);
}
