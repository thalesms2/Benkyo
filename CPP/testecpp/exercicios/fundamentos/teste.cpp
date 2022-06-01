#include <iostream>
using namespace std;

int teste2(int &a, int &b){
    a += 2;
    b = a + 3;
}


int main() {
    int x = 0, y = 0;
    teste2(x,y);
    cout << x << "\t" << y << endl;
}