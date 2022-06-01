#include <iostream>
#include <windows.h>
#include "codefun.h"
using namespace std;
#define TAM 3

struct horario {
    int hora, minuto, segundo;
};

void leitura(horario &time){
    clrscr();
    gotoxy(0,0);
    cout << "Infome o horario (hh:mm:ss)\n";
    cin >> time.hora;
    gotoxy(2,1);
    cout << ":";
    cin >> time.minuto;
    gotoxy(5,1);
    cout << ":";
    cin >> time.segundo;
    cout << endl;
}

void show(horario time){
    clrscr();
    gotoxy(0,0);
    cout << "Horario resultante ";
    gotoxy(0,1);
    cout << "00:00:00";
    if(time.hora < 10){
        gotoxy(1,1);
        cout << time.hora << ":";
    }else{
        gotoxy(0,1);
        cout << time.hora << ":";
    }
    if(time.minuto < 10){
        gotoxy(4,1);
        cout << time.minuto << ":";
    }else{
        gotoxy(3,1);
        cout << time.minuto << ":";
    }
    if(time.segundo < 10){
        gotoxy(7,1);
        cout << time.segundo;
    }else{
        gotoxy(6,1);
        cout << time.segundo;
    }
}

void soma(horario time[]){
    time[3].hora = 0;
    time[3].minuto = 0;
    time[3].segundo = 0;
    if(time[0].segundo+time[1].segundo>=60){
        time[3].segundo = (time[0].segundo+time[1].segundo)%60;
        time[3].minuto++;
    }else{
        time[3].segundo = time[0].segundo+time[1].segundo;
    }
    if(time[0].minuto+time[1].minuto>=60){
        time[3].minuto += (time[0].minuto+time[1].minuto)%60;
        time[3].hora++;
    }else{
        time[3].minuto += time[0].minuto+time[1].minuto;
    }
    if(time[0].hora+time[1].hora >= 24){
        time[3].hora += (time[0].hora+time[1].hora)%24;
    }else{
        time[3].hora += time[0].hora+time[1].hora;
    }

}

int main(){
    horario time[TAM];
    leitura(time[0]);
    leitura(time[1]);
    soma(time);
    show(time[3]);
}
