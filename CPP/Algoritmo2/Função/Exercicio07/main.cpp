#include <iostream>
using namespace std;
void fibonacci(){
    int fib = 0, fib1 = 1, fibonacci;
    for(int i = 0;i<20;i++){
        fibonacci = fib + fib1;
        fib = fib1;
        fib1 = fibonacci;
        cout << fibonacci << endl;
    }
}
int main(){
    fibonacci();
}
