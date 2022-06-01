#include <iostream>
using namespace std;
#define TAM 3
int main() {
    int matriz[TAM][TAM], matrizAlt[TAM][TAM], i, j;
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cin >> matriz[i][j];
        }
    }
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if (matriz[i][j]>100){
                matrizAlt[i][j]=0;
            }else{
                matrizAlt[i][j]=matriz[i][j];
            }
        }
    }
    cout << "Matriz inicial\n";
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            cout <<  matriz[i][j] << "\t";
        }
        cout<<endl;
    }
    cout << "Matriz alterada\n";
    for (i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
             cout <<  matrizAlt[i][j] << "\t";
        }
        cout<<endl;
    }
	return 0;
}
