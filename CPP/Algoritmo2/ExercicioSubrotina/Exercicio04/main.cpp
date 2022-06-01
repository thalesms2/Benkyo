#include <iostream>
using namespace std;
void primos(int inicio, int limite){
    int contador = 0, retorno;
    while (contador<limite){
        retorno = 0;
        for(int i = inicio;i>0;i--){
            if (inicio%i==0){
                retorno += 1;
            }
        }
        if (retorno==2){
            cout << "Numero "<< inicio << " eh primo" << endl;
            contador++;
        }
        inicio++;
    }
}
int funcao(int x, int n){
    int res = 0, fatorial;
    for(int i = n;i>0;i--){
        fatorial = 1;
        for(int p = i;p>0;p--){
            fatorial *= p;
        }
        if (i%2==0){
            res += (x+n+1)/fatorial;
        }else{
            res -= (x+n+1)/fatorial;
        }
    }
}
int main(){
    int inicio = 100, limite = 10;
    primos(inicio, limite);

}
