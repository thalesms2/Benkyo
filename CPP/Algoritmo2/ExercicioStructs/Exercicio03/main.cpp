#include <iostream>
using namespace std;
#define TAM 2

struct mercado{
    int codigo;
    char nome[30];
};

void leitura(mercado produtos[]){
    for(int i=0;i<TAM;i++){
        cout << "Codigo ";
        cin >> produtos[i].codigo;
        cout << "Nome ";
        cin >> produtos[i].nome;
    }
}

void showStruct(mercado produtos[]){
    for(int i=0;i<TAM;i++){
        cout << "Codigo " << produtos[i].codigo << " Nome " << produtos[i].nome << endl;
    }
}

int pesquisaCodigo(mercado produtos[], int codigo){
    for(int i=0;i<TAM;i++){
        if(codigo == produtos[i].codigo){
            return i;
        }
    }
}
int main(){
    mercado produtos[TAM];
    int target, loc;
    leitura(produtos);
    showStruct(produtos);
    cin >> target;
    loc = pesquisaCodigo(produtos, target);
    cout << "Nome " << produtos[loc].nome;
}
