#include <iostream>
using namespace std;
#define TAM 3
int main() {
  int matriz[TAM][TAM], i, j;
  for (i = 0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            matriz[i][j] = 1;
        }
        cout<< endl;
  }
  for (i = 0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout<< matriz[i][j] << "\t";
        }
        cout<< endl;
  }
	return 0;
}
