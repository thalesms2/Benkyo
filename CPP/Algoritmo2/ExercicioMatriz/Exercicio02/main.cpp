#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define TAM 5
void showMatriz(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
void showMatriz(int matriz[][TAM], int linha, int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
void showMatriz(int matriz[][TAM*2], int linha, int coluna){
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
void showVetor(int vetor[]){
    for(int i=0;i<TAM;i++){
        cout << vetor[i] << "\t";
    }
}
void leitura(int matriz[][TAM]){
    for(int i = 0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            cout << ">> ";
            cin >> matriz[i][j];
        }
    }
}
void leitura(int matriz[][TAM], int linha, int coluna){
    for(int i = 0;i<linha;i++){
        for(int j = 0;j<coluna;j++){
            cout << ">> ";
            cin >> matriz[i][j];
        }
    }
}
void leitura(int matriz[][TAM*2], int linha, int coluna){
    for(int i = 0;i<linha;i++){
        for(int j = 0;j<coluna;j++){
            cout << ">> ";
            cin >> matriz[i][j];
        }
    }
}
int soma(int matriz[][TAM]){
    int soma = 0;
    for(int i = 0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}
void retornoC (int matrizA[][TAM], int matrizB[][TAM], int matrizRes[][TAM], int linha, int coluna){
    for(int i = 0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matrizRes[i][j] = matrizA[i][j]+matrizB[i][j];
        }
    }
}
void showLinha(int matrizC[][TAM], int linha){
    for(int j=0;j<linha;j++){
        cout << matrizC[2][j] << "\t";
    }
}
void showColuna(int matrizC[][TAM], int coluna){
    for(int i=0;i<coluna;i++){
        cout << matrizC[i][3] << "\t";
    }
}
void preencheRandom(int matriz[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j =0;j<TAM;j++){
            matriz[i][j] = rand()%100+1;
        }
    }
}
int retornaMaior(int matriz[][TAM]){
    int maior = matriz[0][0];
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}
int somatorioPrincipal(int matriz[][TAM]){
    int soma = 0;
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i==j){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}
int somatorioPrincipal(int matriz[][TAM], int linha, int coluna){
    int soma = 0;
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(i==j){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}
int somatorioSecundario(int matriz[][TAM]){
    int soma = 0;
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i+j==TAM-1){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}
int somatorioSecundario(int matriz[][TAM], int linha, int coluna){
    int soma = 0;
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(i+j==linha-1){
                soma += matriz[i][j];
            }
        }
    }
    return soma;
}
void somaLinhas(int matriz[][TAM], int soma[]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            soma[i] += matriz[i][j];
        }
    }
}

void somaColunas(int matriz[][TAM], int soma[]){
    for(int j=0;j<TAM;j++){
        for(int i=0;i<TAM;i++){
            soma[j] += matriz[i][j];
        }
    }
}
void verificarMaiorLinha(int matriz[][TAM*2], int maior[]){
    for(int i=0;i<TAM;i++){
        maior[i] = matriz[i][0];
        for(int j=0;j<TAM;j++){
            if(matriz[i][j]>maior[i]){
                maior[i] = matriz[i][j];
            }
        }
    }
}
void verificarMenorColuna(int matriz[][TAM*2], int menor[]){
    for(int j=0;j<TAM;j++){
        menor[j] = matriz[0][j];
        for(int i=0;i<TAM;i++){
            if(matriz[i][j]<menor[j]){
                menor[j] = matriz[i][j];
            }
        }
    }
}
void menorNumero(int matrizX[][TAM], int matrizY[][TAM], int matrizW[][TAM]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if (matrizX[i][j]<matrizY[i][j]){
                matrizW[i][j] = matrizX[i][j];
            }else{
                matrizW[i][j] = matrizY[i][j];
            }
        }
    }
}
void vetorPrincipal(matriz[][TAM], vetor[]){
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(i == j){
                vetor[i] = matriz[i][j];
            }
        }
    }
}
int verificarMenorVetor(int vetor[]){
    int menor = vetor[TAM-1], pos = TAM;
    for(int i = TAM-1;i>0;i--){
        if(vetor[i]<menor){
            menor = vetor[i];
            pos = i+1;
        }
    }
    return pos;
}
int somaTenth(int matriz[][TAM]){
    int soma = 0;
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(j>=i and )
        }
    }
}
void rotacionaMatriz(int matriz[][TAM], int matrizRes[][TAM]){

}
void first(int matriz[][TAM]){
    leitura(matriz);
    cout << "A soma dos valores eh " << soma(matriz);
}
void second(int matrizA[][TAM], int matrizB[][TAM], int matrizC[][TAM]){
    leitura(matrizA, 3, 5);
    leitura(matrizB, 3, 5);
    retornoC(matrizA, matrizB, matrizC, 3, 5);
    showMatriz(matrizC, 3, 5);
    cout << endl;
    showLinha(matrizC, 3);
    cout << endl;
    showColuna(matrizC, 5);
}
void third(int matriz[][TAM]){
    preencheRandom(matriz);
    showMatriz(matriz);
    cout<< endl;
    cout << "O maior elemento eh "<< retornaMaior(matriz);
}
void fourth(int matriz[][TAM]){
    leitura(matriz, 4, 4);
    showMatriz(matriz, 4, 4);
    cout << "A soma da diagonal principal eh " << somatorioPrincipal(matriz, 4, 4);
}
void fifth(int matriz[][TAM]){
    leitura(matriz, 4, 4);
    showMatriz(matriz, 4, 4);
    cout << "A soma da diagonal secundaria eh " << somatorioSecundario(matriz, 4, 4);
}
void sixth(int matriz[][TAM]){
    int linhas[TAM] = {}, colunas[TAM] = {};
    preencheRandom(matriz);
    showMatriz(matriz);
    somaLinhas(matriz, linhas);
    somaColunas(matriz, colunas);
    cout << endl << "Linhas" << endl;
    showVetor(linhas);
    cout << endl << "Colunas" << endl;
    showVetor(colunas);
}
void seventh(){
    int matriz[TAM*2][TAM*2], linha[TAM*2], coluna[TAM*2];
    leitura(matriz, 10, 10);
    verificarMaiorLinha(matriz, linha);
    verificarMenorColuna(matriz, coluna);
    showMatriz(matriz, 10, 10);
    cout << endl << "Linha" << endl;
    showVetor(linha);
    cout << endl << "Coluna" << endl;
    showVetor(coluna);
}
void eighth(int matriz[][TAM], int matrizB[][TAM]){
    int soma[] = {};
    somaLinhas(matriz, soma);
    for(int i=0;i<TAM;i++){
        for (int j=0;j<TAM;j++){
            matrizB[i][j]=matriz[i][j]*soma[i];
        }
    }
    showMatriz(matrizB);
}
void ninth(){
    int matrizX[TAM][TAM], matrizY[TAM][TAM], matrizW[TAM][TAM], principalX[TAM], somaY[TAM];
    leitura(matriz);
    leitura(matriz);
    menorNumero(matrizX, matrizY, matrixW);
    cout << endl << "Matriz Resultante" << endl;
    showMatriz(matrizW);
    vetorPrincipal(matrizX, principalX)
    cout << "Vetor principal" << endl;
    showVetor(principalX);
    somaColunas(matrizY, somaY);
    cout << "A posicao da menor soma de coluna eh " << verificarMenorVetor(somaY);
}
void tenth(){

}
void eleventh(){
    int matriz[TAM][TAM], matrizRot[TAM][TAM];
    rotacionaMatriz(matriz, matrizRot);
    showMatriz(matrizRot);
}
int main(){
    srand(time(NULL));
    int matriz[TAM][TAM], soma[TAM] = {}, matrizB[TAM][TAM], matrizC[TAM][TAM];
    seventh();
}
