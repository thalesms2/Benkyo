#include <iostream>
#include <time.h>
using namespace std;
#define TAM 3
int main() {
	srand(static_cast<unsigned int>(time(0)));
	unsigned int random[TAM], i;
	for (i=0;i<TAM;i++){
		random[i] = rand() % (TAM);
		for (int i2 = i; i2>=0; i2--){
			if (random[i]==random[i2]){
				random[i] = rand() % TAM;
				i2=i;
			}
		}
	}
	for (i=0;i<TAM;i++){
		cout<< "\n "<< random[i];
	}
  return 0;
}