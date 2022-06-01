#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int i, a[TAM], b[TAM];
	for(i=0;i<TAM;i++){
		cin >> a[i];
	}
	for(i=0;i<=TAM;i++){
		b[i]=a[TAM-i-1];
	}
	for(i=0;i<TAM;i++){
		cout << "\n" << b[i];
	}
	return 0;
}