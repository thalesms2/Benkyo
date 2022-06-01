#include <iostream>
using namespace std;
int main() {
  float num, fatAux, fatorial, aux;
	double s;
	cout << "Informe um numero: ";
  cin >> num;
  while (num>=0){
	if (num!=0){
		fatAux = num;
		fatorial = num;
		while (fatAux>1){
			fatAux--;
			fatorial *= fatAux;
		}
	}
	aux = num+1;
	s += aux / fatorial;
	num--;
  }
	cout << s;
}