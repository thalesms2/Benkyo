#include <iostream>
using namespace std;
int fatorial(int x){
    int fatorial = 1;
    for(int i=x;i>0;i--){
        fatorial *= i;
    }
}
int main(){
    int numero;
    cin >> numero;
    cout << fatorial(numero);
}
