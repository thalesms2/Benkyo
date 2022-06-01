#include <iostream>
using namespace std;

int main()
{
    int num, i = 0, aux;
    cout << "Tabuada: ";
    cin >> num;
    while (i<=10){
        aux = num * i;
        cout << num << "x" << i << " = " << aux << "\n";
        i++;
    }
    return 0;
}
