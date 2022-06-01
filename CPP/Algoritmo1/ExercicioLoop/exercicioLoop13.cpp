#include <iostream>
using namespace std;
int main() {
  int insert, fatorialAux, fatorial = 0, impar, imparRes = 0, fibonacci, fib1, fib2, quant = 0;
  float percentImpar;
  do {
    cout << "Informe um numero \n";
	cin >> insert;
	if (insert>0){
		fatorialAux = insert;
		fatorial = insert;
		while (fatorialAux>1){
			fatorialAux = fatorialAux - 1;
			fatorial = fatorial*fatorialAux;
		}
		cout << "Fatorial: " << fatorial;
		fibonacci = 0;
		fib1 = 0;
		fib2 = 1;
		while (fibonacci<insert){
			fibonacci = fib1 + fib2;
			fib1 = fib2;
			fib2 = fibonacci; 
    	}
		if (insert == fibonacci){
			cout << "\nPertence ao fibonacci\n";
		}else{
			cout << "\nNao pertence ao fibonacci\n";
		}
		quant++;
		impar = insert % 2;
		if (impar == 1){
			imparRes++;
		}
		cout << "\n";
	}
  } while (insert != 0);
  	percentImpar = imparRes*100/quant;
	cout << "\nQuantidade: " << quant;
	cout << "\nImpar: "<< percentImpar << "%";
}