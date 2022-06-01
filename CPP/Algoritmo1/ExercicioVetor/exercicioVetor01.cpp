#import <iostream>
using namespace std;
int main {
	int valor[10], soma = 0, menor, maior, i;
	for (i = 0; i<10; i++){
		cin >> valor[i];
		soma += valor[i];
	}
	maior = valor[0];
	menor = valor[0];
	soma = soma / 10;
	for (i = 1; i<10; i++){
		if (valor[i]>maior){
			,
			
			maior = valor[i];
		}
		if (valor[i]<menor){
			menor = valor[i];
		}
	}
	cout << "Maior " << maior << " Menor "<< menor << " Media " << soma;
	return 0;
}