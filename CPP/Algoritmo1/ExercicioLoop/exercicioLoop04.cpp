#include <iostream>
using namespace std;

int main()
{
    int menor = 2147483647, maior = 0, boo = 1, aux;
    while (boo>0){
        cout << "Informe um valor";
        cin >> aux;
        if (aux > 0){
            if(aux>maior){
                maior = aux;
            }
            if(aux<menor){
                menor = aux;
            }
        }else{
            boo = 0;
        }
    }
    cout << "Maior - " << maior << " | Menor - " << menor;
    return 0;
}
