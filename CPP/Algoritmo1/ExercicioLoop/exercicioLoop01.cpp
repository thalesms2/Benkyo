#include <iostream>
using namespace std;

int main()
{
    int num[10], i = 0, soma = 0;
    while (i < 10){
        cout << "Informe um valor inteiro\n";
        cin >> num[i];
        soma = soma + num[i];
        i++;
    }
    cout << soma;
    return 0;
}
