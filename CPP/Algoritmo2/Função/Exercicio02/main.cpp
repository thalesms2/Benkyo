#include <iostream>
using namespace std;
void parImpar(int x){
    if(x%2==0){
        cout << "O numero e par";
    }else{
        cout << "O numero e impar";
    }
}
int main(){
    int x;
    cin >> x;
    parImpar(x);
}
