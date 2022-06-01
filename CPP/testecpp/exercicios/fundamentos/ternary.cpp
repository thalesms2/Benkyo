#include <iostream>
using namespace std;

int main() {
    bool sunny = true;
    // exp(T/F) ? T : F
    string result = sunny ? ":)" : ":(";
    cout << result << endl;

    double balance = 1234.56;
    double value;
    cout << "Enter the value: ";
    cin >> value;

    char creditOrDebt;
    cout << "Credit (c)/Debt (d) ";
    cin >> creditOrDebt;

    cout << "Balance [Before]: " << balance << endl;

    balance += creditOrDebt == 'c' ? value : -value;

    cout << "Balance [After]: " << balance << endl; 

    return 0;
}