#include <iostream>
using namespace std;
float pesoIdeal(char genero, float altura){
    float peso;
    if (genero == 'F'){
        peso = 62,1 * altura - 44,7;
    }else if (genero == 'M'){
        peso = 72,7 * altura - 58;
    }else{
        cout << "Erro";
    }
    return peso;
}
int main(){
    char genero;
    float altura;
    cout << "Informe o genero: F Feminino | M Masculino "<< endl;
    cin >> genero;
    cout << "Informe a altura" << endl;
    cin >> altura;
    cout << endl << pesoIdeal(genero, altura);
    GetConsoleCursorPosition
    cout << coord.x;
    cout << coord.y;
}
