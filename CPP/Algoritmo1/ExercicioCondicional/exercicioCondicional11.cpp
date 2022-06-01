#include <iostream>
using namespace std;
int main() {
  int dia, mes, ano, bissexto, error = 0;
  cout << "Informe o dia: \n";
  cin >> dia;
  cout << "Informe o mes: \n";
  cin >> mes;
  cout << "Informe o ano: \n";
  cin >> ano;
  if (dia > 0 and mes > 0 and ano > 0){
    bissexto = (ano % 100)%4;
    if (bissexto == 0){
      cout << "O ano e bissexto\n";
    }else{
      cout << "O ano nao e bissexto\n";
      bissexto = 1;
    }
    if (mes>12){
      cout << "Mes invalido \n";
      error = 1; 
    }
    if (dia <=31 and (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12)){
      dia = dia;
    }else if (dia <=30 and (mes == 4 or mes == 6 or mes == 9 or mes == 11)){
      dia = dia;
    }else if (dia <= 28 and mes == 2){
      dia = dia;
    }else if (dia == 29 and mes == 2 and bissexto == 0){
      dia = dia;
    }else{
      error = 1;
    }
  if (error == 0){
    cout << "A data informada: " << dia << "/" << mes << "/" << ano << " e valida!";
  }else{
    cout << "A data informada nao e valida";
  }
  }
}