#include <iostream>
using namespace std;

int main()
{
    int first, last, par = 0, impar = 1, aux;
    cout << "Informe o intervalo:\n";
    cin >> first >> last;
    if(first>last){
        while (first >= last){
            aux = first % 2;
            if (aux>0){
                impar *= first;
            }else{
                par += first;
            }
            first--;
        }
    }else if(last>first){
        while (last >= first){
            aux = last % 2;
            if (aux>0){
                impar *= last;
            }else{
                par += last;
            }
            last--;
        }
    }else{
        cout << "Os numeros são iguais";
    }
    cout << "A soma dos numeros pares e: " << par << " e o produto dos numeros impares e: " << impar;

    return 0;
}
