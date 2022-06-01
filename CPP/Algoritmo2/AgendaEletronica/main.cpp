#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "codefun.h"
#include <conio.h>
#include "journal.h"
#include <time.h>
using namespace std;

#define TAM 10

void setCursor(){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);
    int CX=0, CY=0;
    COORD coord;
    coord.X = CX;
    coord.Y = CY;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void box(int direita, int esquerda, int inferior, int superior){ // caixa de selecao
    char barraVertical = 186, barraHorizontal = 205, ponta1 = 201, ponta2 = 187, ponta3 = 200, ponta4 = 188;
    textcolor(WHITE, BLACK);
    int tamanhoVertical, tamanhoHorizontal, aux;
    tamanhoHorizontal = direita - esquerda;
    tamanhoVertical = inferior - superior;
    for(int i=0;i<tamanhoHorizontal;i++){
        gotoxy(esquerda+i,superior);
        cout << barraHorizontal;
        gotoxy(esquerda+i,inferior);
        cout << barraHorizontal;
    }
    for(int i=0;i<tamanhoVertical;i++){
        gotoxy(esquerda,superior+i);
        cout << barraVertical;
        gotoxy(direita,superior+i);
        cout << barraVertical;
    }
    gotoxy(esquerda,superior);
    cout << ponta1;
    gotoxy(direita,superior);
    cout << ponta2;
    gotoxy(esquerda,inferior);
    cout << ponta3;
    gotoxy(direita,inferior);
    cout << ponta4;
}

void clearBox(int direita, int esquerda, int inferior, int superior){ // apagar a caixa
    char barraVertical = 186, barraHorizontal = 205, ponta1 = 201, ponta2 = 187, ponta3 = 200, ponta4 = 188;
    textcolor(BLACK, BLACK);
    int tamanhoVertical, tamanhoHorizontal, aux;
    tamanhoHorizontal = direita - esquerda;
    tamanhoVertical = inferior - superior;
    for(int i=0;i<tamanhoHorizontal;i++){
        gotoxy(esquerda+i,superior);
        cout << barraHorizontal;
        gotoxy(esquerda+i,inferior);
        cout << barraHorizontal;
    }
    for(int i=0;i<tamanhoVertical;i++){
        gotoxy(esquerda,superior+i);
        cout << barraVertical;
        gotoxy(direita,superior+i);
        cout << barraVertical;
    }
    gotoxy(esquerda,superior);
    cout << ponta1;
    gotoxy(direita,superior);
    cout << ponta2;
    gotoxy(esquerda,inferior);
    cout << ponta3;
    gotoxy(direita,inferior);
    cout << ponta4;
}

void menu(bool &startMenu, bool &startAgenda, bool &startInserir, bool &startPesquisa, bool &exit){
    clrscr();
    int y=2;
    gotoxy(54,2);
    cout << "Agenda Eletronica";
    gotoxy(58,4);
    cout << "Adicionar";
    gotoxy(58,6);
    cout << "Pesquisar";
    gotoxy(60,8);
    cout << "Sair";
    gotoxy(51,y);
    cout << ">>";
    gotoxy(72,y);
    cout << "<<";
    while(startMenu){
        if(_kbhit()){
            char tecla = getch();
            switch(tecla){
            case 'w':
                gotoxy(51,y);
                textcolor(BLACK,BLACK);
                cout << ">>";
                gotoxy(72,y);
                cout << "<<";
                if(y==2){
                    y = 8;
                    gotoxy(51,y);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                    gotoxy(72,y);
                    cout << "<<";
                }else{
                    y -= 2;
                    gotoxy(51,y);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                    gotoxy(72,y);
                    cout << "<<";
                }
            break;
            case 's':
                gotoxy(51,y);
                textcolor(BLACK,BLACK);
                cout << ">>";
                gotoxy(72,y);
                cout << "<<";
                if(y==8){
                    y = 2;
                    gotoxy(51,y);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                    gotoxy(72,y);
                    cout << "<<";
                }else{
                    y += 2;
                    gotoxy(51,y);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                    gotoxy(72,y);
                    cout << "<<";
                }
            break;
            case 13:
                clrscr();
                switch (y){
                case 2:
                    startAgenda = true;
                    startMenu = false;
                break;
                case 4:
                    startInserir = true;
                    startMenu = false;
                break;
                case 6:
                    startPesquisa = true;
                    startMenu = false;
                break;
                case 8:
                    exit = true;
                    startMenu = false;
                break;
                }
            break;
            }
        }
        setCursor();
    }
}

void inserir(bool &startInserir, bool &startFisico, bool &startJuridico, bool &startMenu){
    clrscr();
    int cursor = 1;
    gotoxy(24,1);
    cout << "Pessoa Fisica";
    gotoxy(9,3);
    cout << "Nome";
    gotoxy(9,4);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(9,5);
    cout << "CPF";
    gotoxy(9,6);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(9,7);
    cout << "Celular";
    gotoxy(9,8);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(82,1);
    cout << "Pessoa Juridica";
    gotoxy(67,3);
    cout << "Nome da empresa";
    gotoxy(67,4);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(67,5);
    cout << "CNPJ";
    gotoxy(67,6);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(67,7);
    cout << "Telefone comercial";
    gotoxy(67,8);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    box(52,8,9,2);
    while(startInserir){
        if(_kbhit()){
            char tecla = getch();
            switch(tecla){
            case 'a':
                if(cursor == 1){
                    clearBox(52,8,9,2);
                    box(110,66,9,2);
                    cursor++;
                }else{
                    clearBox(110,66,9,2);
                    box(52,8,9,2);
                    cursor--;
                }
            break;
            case 'd':
                if(cursor == 1){
                    clearBox(52,8,9,2);
                    box(110,66,9,2);
                    cursor++;
                }else{
                    clearBox(110,66,9,2);
                    box(52,8,9,2);
                    cursor--;
                }
            break;
            case 13:
                if(cursor == 1){
                    startFisico = true;
                    startInserir = false;
                }else{
                    startJuridico = true;
                    startInserir = false;
                }
            break;
            case 'm':
                startInserir = false;
                startMenu = true;
            break;
            }
        }
    }
}

void inserirFisica(Fisica &pessoaFisica, bool &startFisico, bool &startInserir){
    clrscr();
    gotoxy(5,1);
    cout << "Nome";
    gotoxy(5,2);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(5,3);
    cout << "CPF";
    gotoxy(5,4);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(5,5);
    cout << "Celular";
    gotoxy(5,6);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    gotoxy(5,2);
    textcolor(BLACK,WHITE);
    fflush(stdin);
    getline(cin, var);
    cin >> pessoaFisica.nome;
    gotoxy(5,4);
    cin >> pessoaFisica.CPF;
    gotoxy(5,6);
    cin >> pessoaFisica.cel;
    pessoaFisica.id = rand()%1000 + 1;
    startInserir = true;
    startFisico = false;
}

void inserirJuridico(Juridica &pessoaJuridica, bool &startJuridico, bool &startInserir){
    clrscr();
    gotoxy(5,1);
    cout << "Nome da empresa";
    gotoxy(5,2);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(5,3);
    cout << "CNPJ";
    gotoxy(5,4);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    textcolor(WHITE,BLACK);
    gotoxy(5,5);
    cout << "Telefone comercial";
    gotoxy(5,6);
    textcolor(WHITE, WHITE);
    cout << "0000000000000000000000000000000000000000000";
    gotoxy(5,2);
    textcolor(BLACK,WHITE);
    fflush(stdin);
    getline(cin, var);
    cin >> pessoaJuridica.nome;
    gotoxy(5,4);
    cin >> pessoaJuridica.CNPJ;
    gotoxy(5,6);
    cin >> pessoaJuridica.tel;
    pessoaJuridica.id = rand()%1000 + 1;
    startInserir = true;
    startJuridico = false;
}

void agenda(Juridica pessoaJuridica[TAM], Fisica pessoaFisica[TAM], bool &startAgenda){
    int cont = 0, x = 5, y = 2, cursor=1, aux;
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            gotoxy(x,y);
            cout << "ID " << pessoaFisica[cont].id;
            gotoxy(x,y+1);
            cout << "Nome " << pessoaFisica[cont].nome;
            gotoxy(x,y+2);
            cout << "CPF " << pessoaFisica[cont].CPF;
            gotoxy(x,y+3);
            cout << "Celular " << pessoaFisica[cont].cel;
            if(j){
                x = 5;
            }else{
                x = 67;
            }
        }
        cont++;
        y+=6;
    }
    box(52,4,6,1);
    while(startAgenda){
        if(_kbhit()){
            char tecla = getch();
            switch(tecla){
            case 'w':
                if(cursor>2){
                    if(cursor%2){
                        aux = cursor/2;
                        clearBox(52,4,6*aux,1*aux);
                        cursor-=2;
                        aux = cursor/2;
                        box(52,4,6*aux,1*aux);
                    }else{
                        aux = (cursor/2)+(cursor%2);
                        clearBox(113,66,6*aux,1*aux);
                        cursor-=2;
                        aux = (cursor/2)+(cursor%2);
                        box(113,66,6*aux,1*aux);
                    }
                }
            break;
            case 's':
                if(cursor>2){
                    if(cursor%2){
                        aux = cursor/2;
                        clearBox(52,4,6*aux,1*aux);
                        cursor-=2;
                        aux = cursor/2;
                        box(52,4,6*aux,1*aux);
                    }else{
                        aux = (cursor/2)+(cursor%2);
                        clearBox(113,66,6*aux,1*aux);
                        cursor-=2;
                        aux = (cursor/2)+(cursor%2);
                        box(113,66,6*aux,1*aux);
                    }
                }
            break;
            case 'a':
                if(!cursor%2){
                    aux = cursor/2;
                    clearBox(113,66,6*aux,1*aux);
                    cursor--;
                    aux = cursor/2+1;
                    box(52,4,6*aux,1*aux);
                }else{
                    aux = cursor/2+1;
                    clearBox(52,4,6*aux,1*aux);
                    cursor--;
                    aux = cursor/2;
                    box(113,66,6*aux,1*aux);
                }
            break;
            case 'd':
                if(cursor%2){
                    aux = cursor/2;
                    clearBox(113,66,6*aux,1*aux);
                    cursor++;
                    aux = cursor/2+1;
                    box(52,4,6*aux,1*aux);
                }else{
                    aux = cursor/2+1;
                    clearBox(52,4,6*aux,1*aux);
                    cursor++;
                    aux = cursor/2;
                    box(113,66,6*aux,1*aux);
                }
            break;
            case 13:
            break;
            case 'm':
            break;
            }
        }
    }
}

void selectOptions(){

}

void pesquisa(){
    cout << "Informe um valor a localizar";
}

int main(){
    srand(time(NULL));
    Agenda <TAM, int> biblioteca;
    Fisica pessoaFisica[TAM];
    Juridica pessoaJuridica[TAM];
    bool exit = false, startMenu = true, startAgenda = false, startOptions = false, startInserir = false, startFisico = false, startJuridico = false, startPesquisa = false;
    while(!exit){
        while(startMenu){
            menu(startMenu, startAgenda, startInserir, startPesquisa, exit);
        }
        while(startAgenda){
            agenda(pessoaJuridica, pessoaFisica, startAgenda);
            while(startOptions){
                selectOptions();
            }
        }
        while(startInserir){
            inserir(startInserir, startFisico, startJuridico, startMenu);
            while(startFisico){
                inserirFisica(pessoaFisica[0], startFisico, startInserir);
            }
            while(startJuridico){
                inserirJuridico(pessoaJuridica[0], startJuridico, startInserir);
            }
        }
        while(startPesquisa){
            pesquisa();
        }
    }
}
