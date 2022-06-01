#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the initial value: ";
    cin >> x;

    x += 10;
    cout << x << endl;

    x -= 10;
    cout << x << endl;

    x *= 10;
    cout << x << endl;

    x /= 10;
    cout << x << endl;

    x %= 10;
    cout << x << endl;

    return 0;
}