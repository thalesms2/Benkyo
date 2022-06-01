#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define TAM 20
#define DET 10
#define MIN 1
int main() {
	srand(static_cast<unsigned int>(time(0)));
	unsigned int random[TAM], i, localize;
	bool isHere = false;
	for (i=0;i<TAM;i++){
		random[i] = rand() % DET+MIN;
		for (int i2 = i; i2>=0; i2--){
			if (random[i]<random[i2]){
				random[i] = rand() % DET+random[i2];
			}
			if (random[i]==random[i2]){
				random[i] = rand() % DET+MIN;
				i2 = i;
			}
		}
	}
	cout << "Search ";
	cin >> localize;
    for (i=0;i<TAM;i++){
        if(localize == random[i]){
            cout << "\nPOS "<< i;
            isHere = true;
        }
    }
    cout << "\nVetor";
    for (i=0;i<TAM;i++){
        cout << " - " << random[i];
    }
    if (isHere ==false){
        cout << "\nNot in here";
    }
  return 0;
}
