#include <iostream>
using namespace std;
#define TAM 3
void leitura(int limit, int media[]){
    int n;
    for (int i = 0;i<limit;i++){
        int soma = 0;
        for (int j = 0;j<TAM;j++){
            cout << "Infome nota " << endl;
            cin >> n;
            soma += n;
        }
        media[i] = soma/TAM;
    }
}
int aprovados(int limit, int media[]){
    int contador = 0;
    for (int i=0;i<limit;i++){
        if (media[i]>=7){
            contador++;
        }
    }
    return contador;
}
int main(){
    int limit;
    cout << "informe n de alunos" << endl;
    cin >> limit;
    int media[limit];
    leitura(limit, media);
    cout << endl << aprovados(limit, media);
}
