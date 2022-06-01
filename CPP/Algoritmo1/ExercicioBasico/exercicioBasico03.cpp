#include <iostream>
using namespace std;
int main() {
  int numero = 0, result = 0;
  cout << "Informe um numero: \n";
  cin >> numero;
  result = numero % 2;
  if (result == 0){
    cout << "O numero "<< numero << " é par";
  }else{
    cout << "O numero "<< numero << " é impar";
  }
}