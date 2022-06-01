#include <iostream>
using namespace std;
int idade(int dia, int mes, int ano, int diaAtual, int mesAtual, int anoAtual ){
    int idade = anoAtual - ano;
    if(mesAtual<mes){
        idade--;
    }else if(mes==mesAtual and diaAtual<dia){
        idade--;
    }
    return idade;
}
int main(){
    int dia, mes, ano, diaAtual, mesAtual, anoAtual;
    cout << "Data nascimento " << endl;
    cin >> dia >> mes >> ano;
    cout << "Data atual ";
    cin >> diaAtual >> mesAtual >> anoAtual;
    cout << "A idade e " << idade(dia, mes, ano, diaAtual, mesAtual, anoAtual);
}
