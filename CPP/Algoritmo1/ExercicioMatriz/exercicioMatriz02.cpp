#include <iostream>
using namespace std;
#define TAM 5
int main() {
	int a[TAM], b[TAM], c[TAM], i;
	for(i=0; i<TAM;i++){
		cin >> a[i] >> b[i];
		c[i] = a[i] - b[i];
	}
	for(i=0; i<TAM;i++){
		cout << "\n" << a[i] << " - " << b[i] << " = " << c[i];
	}
	return 0;
}