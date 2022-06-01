#include <iostream>
using namespace std;
int main() {
  int numero = 0, invertido = 0;
  cout << "Insira um numero \n";
  cin >> numero;
  if (numero<0){
    while(numero<0){
      invertido ++;
      numero ++;
    }
    cout << "\nO equivalente positivo seria: " << invertido;
  }else{
    cout << "\nO numero seria: " << numero;
  }
  
}