#include <iostream>
using namespace std;
int triangulo(int par1, int par2, int par3){
    int contador = 0;
    if (par1==par2){
        contador++;
    }
    if (par1==par3){
        contador++;
    }
    if (par2 == par3){
        contador++;
    }
    return contador;
}

int main(){
    int res = triangulo(4,4,4);
    if (res == 1){
        cout << "O triangulo eh isosceles";
    }else if (res == 3){
        cout << "O triangulo eh equilatero";
    }else{
        cout << "O triangulo eh escaleno";
    }
}
