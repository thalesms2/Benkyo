#include <iostream>
using namespace std;

int main()
{
    float chico = 1.50, ze = 1.10, ano = 0;
    while (ze < chico){
        ano++;
        chico += 0.02;
        ze += 0.03;
    }
    cout << "Ira demorar " << ano << " anos para que o Ze passe a altura de Chico";
    return 0;
}