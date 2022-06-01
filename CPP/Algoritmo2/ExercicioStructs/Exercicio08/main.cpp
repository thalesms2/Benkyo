/*
        Escreva uma função que receba dois structs do tipo dia, mês e ano, cada um representando
        uma data válida (utilize o algoritmo feito no exercício 2), e devolva o número de dias que
        decorreram entre as duas datas
*/

#include <iostream>
#include <windows.h>
#include "codefun.h"
using namespace std;

template <typename date>
struct basic{
    date day, month, year;
};

template <typename date>
void read(basic<date> &data, int linha){
    gotoxy(0,linha);
    cout << "Informe uma data dd/mm/aaaa";
    gotoxy(0,linha+1);
    cout << "00/00/0000";
    gotoxy(0,linha+1);
    cin >> data.day;
    while(data.day>31){
        gotoxy(0,linha+1);
        cout << "00/00/0000";
        gotoxy(0,linha+1);
        cin >> data.day;
    }
    if(data.day<10){
        gotoxy(0,linha+1);
        cout << "0" << data.day;
    }else{
        gotoxy(0,linha+1);
        cout << data.day;
    }
    gotoxy(3,linha+1);
    cin >> data.month;
    while(data.month>12){
        gotoxy(0,linha+1);
        cout << data.day << "/00/0000";
        gotoxy(3,linha+1);
        cin >> data.month;
    }
    if(data.month<10){
        gotoxy(3,linha+1);
        cout << "0" <<data.month;
    }else{
        gotoxy(3,linha+1);
        cout << data.month;
    }
    gotoxy(6,linha+1);
    cin >> data.year;
    gotoxy(6,linha+1);
    cout << data.year;
}

template <typename date>
bool bissexto(basic<date> data){
    if(data.ano%4 == 0){
        if(data.ano%100!=0 or data.ano%400==0){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool bissexto(int data){
    if(data%4 == 0){
        if(data%100!=0 or data%400==0){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

template <typename date>
int numDias(basic<date> data1, basic<date> data2){
    int contYear = 0, contBi = 0, res = 0;
    // menor...
    for(int i=data1.year;i<data2.year;i++){
        contYear++;
        if(bissexto(i)){
            contBi++;
        }
    }
    res = 366*contBi+(contYear-contBi)*365;

    return res;
}

int main(){
    basic<int> data1, data2;
    int res;
    read(data1,0);
    read(data2,3);
    res = numDias(data1,data2);
    gotoxy(5,0);
    cout << "Numero de dias entre as duas datas eh de " << res;
}
