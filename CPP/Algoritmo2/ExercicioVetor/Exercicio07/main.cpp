#include <iostream>
using namespace std;
#define TAM 3
void leitura(int a[], int b[]){
    for(int i=0;i<TAM;i++){
        cout << "A ";
        cin >> a[i];
        cout << "B ";
        cin >> b[i];
    }
}
void troca(int a[], int b[]){
    for(int i = 0;i<TAM;i++){
        a[i] = a[i]+b[i];
        b[i] = a[i]-b[i];
        a[i] = a[i]-b[i];
    }
}
int main(){
    int a[TAM], b[TAM];
    leitura(a, b);
    cout << "Ordem normal" << endl;
    for(int i=0;i<TAM;i++){
        cout << "A " << a[i] << " | B " << b[i] << endl;
    }
    troca(a, b);
    cout << "Ordem reversa" << endl;
    for(int i=0;i<TAM;i++){
        cout << "A " << a[i] << " | B " << b[i] << endl;
    }
}
