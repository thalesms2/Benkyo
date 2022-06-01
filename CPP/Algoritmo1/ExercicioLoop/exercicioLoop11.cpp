#include <iostream>
using namespace std;
int main() {
  int num, cont = 1, boo, aux = 0;
  cout << "Informe um numero \n";
  cin >> num;
  while (cont<num){
    boo = num % cont;
	if (boo == 0){
		aux += cont;
	}
    cont++;
  }
  if (aux == num){
	  cout << "Numero e perfeito";
  }else{
	  cout << "Numero nao e perfeito";
  }
}