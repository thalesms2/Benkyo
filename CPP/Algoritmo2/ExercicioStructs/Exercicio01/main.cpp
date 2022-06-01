#include <iostream>
using namespace std;
#define TAM 3

struct basic{
    char name[30];
    float altura, peso, imc;
    int cpf;
};
void leitura(basic &pessoas){
    cout << "Nome ";
    cin >> pessoas.name;
    cout << "Altura ";
    cin >> pessoas.altura;
    cout << "Peso ";
    cin >> pessoas.peso;
    cout << "Cpf ";
    cin >> pessoas.cpf;
}
int track(basic pessoas[], int cpf){
    for(int i=0;i<TAM;i++){
        if(pessoas[i].cpf == cpf){
            return i;
        }
    }
}
int main(){
    basic pessoas[TAM];
    int look, target;
    float imc;
    for(int i=0;i<TAM;i++){
        leitura(pessoas[i]);
    }
    for(int x=0;x<TAM;x++){
        cout << "\nInforme um CPF "
        cin >> look;
        target = track(pessoas, look);
        imc = (pessoas[target].altura*2)/pessoas[target].peso;
        if(imc<18,5){
            cout << "Abaixo do peso";
        }else if(imc<24,9){
            cout << "Peso normal";
        }else if(imc<29,9){
            cout << "Sobrepeso";
        }else if(imc<34,9){
            cout << "Obesidade grau 1";
        }else if(imc<39,9){
            cout << "Obesidade grau 2";
        }else if(imc>40){
            cout << "Obesidade grau 3";
        }

    }

}
