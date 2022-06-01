#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int maior = num1;
    if(num2 > maior){
        maior = num2;
    }
    if(num3 > maior){
        maior = num3;
    }
    cout << endl << maior << endl;

    return 0;
}