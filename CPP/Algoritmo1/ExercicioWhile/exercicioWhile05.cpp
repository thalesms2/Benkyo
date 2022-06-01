#include <iostream>
using namespace std;
int main() {
  int cons = 100, aux, soma = 0, cont;
  while (cont<101){
    aux = cons + cont;
    soma = soma + aux;
    if (cont<100){
      cout << aux << " + ";
    }else{
      cout << aux << " = ";
    }
    cont++;
  }
  cout << soma;
}