#include <iostream>
#include <windows.h>
#include "codefun.h"
using namespace std;

struct dat{
    int dia, mes, ano;
};

void leitura(dat &data){
    clrscr();
    gotoxy(0,0);
    cout << "Informe uma data dd/mm/aaaa";
    gotoxy(0,1);
    cout << "00/00/0000";
    gotoxy(0,1);
    cin >> data.dia;
    if(data.dia<10){
        gotoxy(0,1);
        cout << "0" << data.dia;
    }else{
        gotoxy(0,1);
        cout << data.dia;
    }
    gotoxy(3,1);
    cin >> data.mes;
    if(data.mes<10){
        gotoxy(3,1);
        cout << "0" <<data.mes;
    }else{
        gotoxy(3,1);
        cout << data.mes;
    }
    gotoxy(6,1);
    cin >> data.ano;
    gotoxy(6,1);
    cout << data.ano;
}

bool bissexto(dat data){
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

int main(){
    dat data;
    leitura(data);
    if(bissexto(data)){
        gotoxy(0,3);
        cout << "O ano eh bissexto";
    }else{
        gotoxy(0,3);
        cout << "O ano nao eh bissexto";
    }
}
