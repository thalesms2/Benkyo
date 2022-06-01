#include <iostream>
using namespace std;
#define TAM 3

template <typename Type>
Type soma (Type x, Type y){
    return (x + y);
}

struct Aluno {
    int code;
    float grades[TAM];
    char name[30];
};
void leitura(){

}
int main(){
    Aluno aluno[TAM];
    for(int i=0;i<TAM;i++){
        cout << "Codigo ";
        cin >> aluno[i].code;
        cout << "Nome ";
        cin >> aluno[i].name;
        for(int x=0;x<TAM;x++){
            cout << "Nota ";
            cin >> aluno[i].grades[x];
        }
    }
    for(int y=0;y<TAM;y++){
        cout << "\nAluno " << y+1 << "\nCodigo " << aluno[y].code << "\nNome " << aluno[y].name;
        int media = 0;
        for(int m=0;m<TAM;m++){
            media +=aluno[y].grades[m];
        }
        cout << "\nMedia " << media/3;

    }
}
