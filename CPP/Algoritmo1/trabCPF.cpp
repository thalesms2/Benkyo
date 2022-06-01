#include <iostream>
using namespace std;
int main() {
  int numero, cpf1, cpf2, cpf3, cpf4, cpf5, cpf6, cpf7, cpf8, cpf9, cpf10, cpf11, somaTotal;

  cout << "Informe 8 ou 9 numeros: \n";
  cin >> numero;

  cpf9 = numero % 10; // separa o numero do CPF utilizando MOD
  numero = numero / 10; // divide o numero total do CPF
  cpf8 = numero % 10;
  numero = numero / 10;
  cpf7 = numero % 10;
  numero = numero / 10;
  cpf6 = numero % 10;
  numero = numero / 10;
  cpf5 = numero % 10;
  numero = numero / 10;
  cpf4 = numero % 10;
  numero = numero / 10;
  cpf3 = numero % 10;
  numero = numero / 10;
  cpf2 = numero % 10;
  numero = numero / 10;
  cpf1 = numero % 10;
  numero = numero / 10;
  
  somaTotal = cpf1 * 10 + cpf2 * 9 + cpf3 * 8 + cpf4 * 7 + cpf5 * 6 + cpf6 * 5 + cpf7 * 4 + cpf8 * 3 + cpf9 * 2;
  if (somaTotal % 11 >= 2) {
    cpf10 = 11 - (somaTotal % 11);
  }else{
    cpf10 = 0;
  }

  somaTotal = cpf1 * 11 + cpf2 * 10 + cpf3 * 9 + cpf4 * 8 + cpf5 * 7 + cpf6 * 6 + cpf7 * 5 + cpf8 * 4 + cpf9 * 3 + cpf10 * 2;
  if (somaTotal % 11 >= 2) {
    cpf11 = 11 - (somaTotal % 11);
  }else{
    cpf11 = 0;
  }
  cout << "O CPF ficara assim: " << cpf1 << cpf2 << cpf3 << "." << cpf4 << cpf5 << cpf6 << "." << cpf7 << cpf8 << cpf9 << "-" << cpf10 << cpf11;
}
// Feito por Thales, Michael Douglas, Matheus Boni