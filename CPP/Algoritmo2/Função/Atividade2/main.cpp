#include <iostream>
using namespace std;
int soma(int x, int y){
    return (x+y);
}
void leitura (int &x, string letra){
    do {
        cout << "Valor de "<< letra << ": ";
        cin >> x;
        if (x<=0){
            cout<< "Valor Invalido! Digite novamente."<<endl;
        }
    } while (x<=0);
}
int MDC (int a, int b){
    while (a!=b){
        (a>b) ? a = a - b : b = b - a;
    }
    return (a);
}
int main(){
    cout << soma(3,5)<< endl;
    int a, b;
    leitura(a, "A");
    leitura(b, "B");
    cout << endl << "O MDC de "<<a<<" e "<<b<<" eh "<<MDC(a,b);
    return 0;
}
