#include <iostream>
using namespace std;
int main() {
  float diarias, valor;
  cout << "Quantas diarias voce deseja: ";
  cin >> diarias;
  if (diarias > 10){
    valor = diarias * 50 + diarias * 4;
  }else if (diarias == 10){
    valor = diarias * 50 + diarias * 5;
  }else{
    valor = diarias * 50 + diarias * 8.5;
  }
  cout << "O valor total a ser pago e de: R$" << valor;
}