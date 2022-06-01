#include <iostream>
using namespace std;

int main() {
    
    int number;
    do {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;
    }while(number != -1);

    return 0;
}