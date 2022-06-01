#include <iostream>
using namespace std;
int main() {
  int celula50, celula10, celula5, saque, rest;
  cout << "Qual o valor que você deseja sacar? \n";
  cin >> saque;
  celula50 = saque / 50;
  celula10 = saque % 50 / 10;
  celula5 = saque % 50 % 10 / 5;
  rest = saque % 50 % 10 % 5;
  if (rest != 0){
    cout << "Valor invalido";
  }else{
    cout << "Celulas de 50: " << celula50 << "\nCelulas de 10: " << celula10 << "\nCelulas de 5: " << celula5;
  }
}