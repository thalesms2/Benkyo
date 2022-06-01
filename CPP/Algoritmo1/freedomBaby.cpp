#include <iostream>
using namespace std;
int main() {
  int number = 0, counter = 9, multiFirstDigit = 10, somaTotal = 0, multiSecondDigit = 11, cpf[12], soma[11];
  cout << "Informe 8 ou 9 numeros: \n";
  cin >> number;
  while (counter != 0){
    cpf[counter] = number % 10;
    number = number / 10;
    counter--;
  }
  counter ++;
  while (counter < 10){
    soma[counter] = cpf[counter] * multiFirstDigit;
    multiFirstDigit --;
    counter++;
  }
  somaTotal = soma[1] + soma[2] + soma[3] + soma[4] + soma[5] + soma[6] + soma[7] + soma[8] + soma[9];
  if (somaTotal % 11 > 2) {
    cpf[10] = 11 - (somaTotal % 11);
  }else{
    cpf[10] = 0;
  }
  counter = 1;
  while (counter < 11){
    soma[counter] = cpf[counter] * multiSecondDigit;
    multiSecondDigit --;
    counter++;
  }
  somaTotal = soma[1] + soma[2] + soma[3] + soma[4] + soma[5] + soma[6] + soma[7] + soma[8] + soma[9] + soma[10];
  if (somaTotal % 11 > 2) {
    cpf[11] = 11 - (somaTotal % 11);
  }else{
    cpf[11] = 0;
  }
  cout << "O CPF ficara assim: " << cpf[1] << cpf[2] << cpf[3] << "." << cpf[4] << cpf[5] << cpf[6] << "." << cpf[7] << cpf[8] << cpf[9] << "-" << cpf[10] << cpf[11];
  return 0;
}