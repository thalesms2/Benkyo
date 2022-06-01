#include <iostream>
using namespace std;

int main(){
    int *p1, *p2, v;
    v = 3;
    p1 = new int;
    p2 = &v;
    *p1 = 42;
    int *p3;
    p3 = &v;
    v = 88;
    p1 = &v;
    cout << p1 << " | " << *p1 << " || " << p2 << " | " << *p2 << " | " << " || " << p3 << " || " << *p3;
}
