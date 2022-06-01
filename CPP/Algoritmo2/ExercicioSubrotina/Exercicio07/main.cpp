#include <iostream>
using namespace std;
int calculadora(int x, int y, char operacao){
    switch (operacao){
        case '+':
            return x+y;
        break;
        case '-':
            return x-y;
        break;
        case '/':
            return x/y;
        break;
        case '*':
            return x*y;
        break;
    }
}
int main(){
    int res = 1, x, y;
    char operacao;
    while (res != 0){
        cout << "Informe dois valores e a operacao: + | - | / | *" << endl;
        cin >> x >> operacao >> y;
        res = calculadora(x, y, operacao);
        cout << "Resultado: " << res << endl;
    }
}
