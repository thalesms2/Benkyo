#include <iostream>
using namespace std;
int men(int num1, int num2, int num3){
    if (num1<num2 and num1<num3){
        return num1;
    }else if (num2<num3 and num2<num1){
        return num2;
    }else{
        return num3;
    }
}

bool perfect(int num){
    int soma = 0;
    for(int i = num-1;i>0;i--){
        if (i%2==0){
            soma += i;
        }
    }
    if (soma==num){
        return true;
    }else{
        return false;
    }
}
void castigo(int i){
    for(i;i>0;i--){
        cout << "Nao vou colar na Prova." << endl;
    }
}
int main(){
    int quant;
    cin >> quant;
    castigo(quant);
}
