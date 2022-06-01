#include <iostream>
using namespace std;

int main() {
    bool isAdmin = false; // true false 0 1
    cout << isAdmin << endl;

    char symbol('#');
    cout << symbol << endl;

    // signed unsigned long short
    unsigned short int age = 31;
    cout << age << endl;

    float pi = 3.14; // 32bits
    const double PI = 3.141592; // 64bits
    cout << pi << PI << endl;

    cout << endl << sizeof(char) << " byte" << endl;
    cout << endl << sizeof(char16_t) << " byte" << endl;
    cout << endl << sizeof(char32_t) << " byte" << endl;
    cout << endl << sizeof(wchar_t) << " byte" << endl;
    cout << endl << sizeof(int) << " byte" << endl;
    cout << endl << sizeof(long int) << " byte" << endl;
    cout << endl << sizeof(long long int) << " byte" << endl;
    cout << endl << sizeof(float) << " byte" << endl;
    cout << endl << sizeof(double) << " byte" << endl;

    return 0;
}