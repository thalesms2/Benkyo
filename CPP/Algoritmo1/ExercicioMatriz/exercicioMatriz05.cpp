#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int a[TAM], b[TAM],i;
	for (i=0;i<TAM;i++){
		cin >> a[i] >> b[i];
	}
	for (i=0;i<TAM;i++){
		cout << "\nA - " << a[i] << " B - " << b[i];
	}
	cout << "\nInvertido";
	for (i=0;i<TAM;i++){
		b[i] = a[i]+b[i];
		a[i] = b[i]-a[i];
		b[i] = b[i]-a[i];
		cout << "\nA - " << a[i] << " B - " << b[i];
	}
}