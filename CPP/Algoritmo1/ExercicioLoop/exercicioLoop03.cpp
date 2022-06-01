#include <iostream>
using namespace std;

int main()
{
    int i = 0, cont = 0;
    float media[21], nota[4];
    while (i < 20){
        while (cont<3){
            cout << "Informe a nota do aluno\n";
            cin >> nota[cont];
            cont++;
        }
        cout << "-----------------------------------------------\n";
        media[i] = (nota[0] + nota[1] + nota[2])/3;
        i++;
        cont = 0;
    }
    i = 0;
    while (i < 20){
        i++;
        cout << i << " - ";
        i--;
        cout << media[i] << "\n";


    }
    return 0;
}
