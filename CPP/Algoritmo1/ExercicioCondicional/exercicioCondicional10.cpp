#include <iostream>
using namespace std;
int main() {
  int pecas;
  float salario;
  cout << "Informe a quantidade de pecas produzidas: \n";
  cin >> pecas;
  if (pecas<=500){
    cout << "Operador nao tem direito a produtividade pois sua producao esta a baixo da meta \n";
    salario = 240;
  }else if (pecas > 500 and pecas < 750){
    salario = (pecas - 500) * 0.5 + 240;
  }else if (pecas > 750){
    salario = (pecas - 750) * 0.75 + 240;
  }
  cout << "O salario do operador e de: R$" << salario;
}