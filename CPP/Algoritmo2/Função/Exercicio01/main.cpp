#include <iostream>
using namespace std;

int verificarPositivo(int a){
    if(a>=0){
        return 0;
    }else{
        return 1;
    }
}
void leituraNum(int &x){
    cout << "Digite um numero ";
    cin >> x;
}
int main(){
    int x;
    leituraNum(x);
    cout << "O numero digitado e " << verificarPositivo(x);
    return 0;
}
