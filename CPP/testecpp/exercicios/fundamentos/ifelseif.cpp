#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(x >= y && x >= z){
        cout << endl << x << endl;
    } else if(y >= x && y >= z){
        cout << endl << y << endl;
    } else {
        cout << endl << z << endl;
    }
    
    return 0;
}