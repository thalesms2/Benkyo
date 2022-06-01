#include <iostream>
#include <math.h>
using namespace std;
#define TAM 2

struct basic{
    int x, y;
};

void leitura(basic pontos[]){
    for(int i=0;i<TAM;i++){
        cout << "\nX ";
        cin >> pontos[i].x;
        cout << "Y ";
        cin >> pontos[i].y;
    }
}
float calcDistancia(basic pontos[]){
    int result;
    float res;
    result = ((pontos[0].x-pontos[1].x)*(pontos[0].x-pontos[1].x))+((pontos[0].y-pontos[1].y)*(pontos[0].y-pontos[1].y));
    res = sqrt(result);
    return res;
}
int main(){
    basic pontos[TAM];
    leitura(pontos);
    cout << calcDistancia(pontos);
}
