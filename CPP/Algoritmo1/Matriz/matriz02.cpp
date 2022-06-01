#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
#define i 3
#define j 5
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int a[i][j], b[i][j], c[i][j], linha, coluna;
    for(linha=0;linha<i;linha++){
        for(coluna=0;coluna<j;coluna++){
            a[linha][coluna] = rand() % 10+1;
            b[linha][coluna] = rand() % 10+1;
            c[linha][coluna] = a[linha][coluna]+b[linha][coluna];
        }
    }
    for(linha=0;linha<i;linha++){
        for(coluna=0;coluna<j;coluna++){
            cout<< c[linha][coluna]<<"\t";
        }
        cout<< endl;
    }
    cout<< "\nColuna 2";
    for(coluna=0;coluna<j;coluna++){
            cout<< c[2][coluna]<<"\t";
    }
    cout << endl;
    cout<< "\nLinha 3";
    for(linha=0;linha<i;linha++){
        cout<< c[linha][3]<<"\t";
    }
    cout << endl;
	return 0;
}
