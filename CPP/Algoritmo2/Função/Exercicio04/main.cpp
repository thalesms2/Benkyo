#include <iostream>
using namespace std;
void verificar(int x){
    if(x<0){
        cout << "Numero negativo";
    }else if(x>0){
        cout << "Numero positivo";
    }else{
        cout << "Numero eh zero";
    }
}
int main(){
    int x;
    cin >> x;
    verificar(x);
}
