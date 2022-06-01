#include <iostream>
#include <conio.h>
#include "conio2.h"
#include "codefun.h"
#include <windows.h>
#include <time.h>
using namespace std;
#define TAM 2

struct banco{
    char nome[100];
    int cpf;
    int senha;
    float saldo = 0;
};

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

void deposito(banco conta, bool &startMenuLogado, bool &firstDeposito, bool &startDeposito){
    clrscr();
    float valor;
    gotoxy(5,2);
    cout << "CPF do usuario logado " << conta.cpf;
    gotoxy(5,4);
    cout << "Valor do deposito ";
    cin >> valor;
    if(firstDeposito){
        gotoxy(5,6);
        cout << "Conta criada com sucesso";
        conta.saldo = valor;
        firstDeposito = false;
        startDeposito = false;
        startMenuLogado = true;
    }else{
        conta.saldo += valor;
        gotoxy(5,6);
        cout << "Deposito efetuado com sucesso";
        startDeposito = false;
        startMenuLogado = true;
    }
}

void saldo(banco conta, bool &startSaldo, bool &startMenuLogado){
    clrscr();
    bool over = true, tecla;
    gotoxy(5,2);
    cout << "Saldo " << conta.saldo;
    while(over == true){
        gotoxy(5, 4);
        cout << "Aperta uma tecla para voltar ao Menu";
        if(_kbhit()){
            over = false;
            tecla = getch();
            startMenuLogado = true;
            startSaldo = false;
        }
        setCursor();
    }
}

void menuLogado(banco conta, bool &startMenuLogado, bool &startDeposito, bool &startSaldo, bool &startMenu){
    clrscr();
    int cursor = 4;
    gotoxy(5,2);
    cout << "CPF " << conta.cpf ;
    gotoxy(5,4);
    cout << "Deposito";
    gotoxy(5,5);
    cout << "Saldo";
    gotoxy(5,6);
    cout << "Logoff";
    gotoxy(2,cursor);
    cout << ">>";
    while(startMenuLogado){
        if(_kbhit()){
            char tecla = getch();
            switch (tecla){
            case 'w':
                if(cursor!=4){
                    gotoxy(2,cursor);
                    textcolor(BLACK,BLACK);
                    cout << "00";
                    cursor--;
                    gotoxy(2,cursor);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                }
            break;
            case 's':
                if(cursor!=6){
                    gotoxy(2,cursor);
                    textcolor(BLACK,BLACK);
                    cout << "00";
                    cursor++;
                    gotoxy(2,cursor);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                }
            break;
            case 13:
                switch (cursor){
                case 4:
                    startDeposito = true;
                    startMenuLogado = false;
                break;
                case 5:
                    startSaldo = true;
                    startMenuLogado = false;
                break;
                case 6:
                    startMenu = true;
                    startMenuLogado = false;
                break;
                }
            break;
            }
        }
        setCursor();
    }
}

bool verificarCpf(banco conta[], int cpf, int &pos){
    for(int i=0;i<TAM;i++){
        if(conta[i].cpf == cpf){
            pos = i;
            return true;
        }else{
            pos = 0;
            return false;
        }
    }
}

bool verificarSenha(banco conta, int senha){
    if(senha == conta.senha){
        return true;
    }else{
        return false;
    }
}

int login(banco conta[], bool &startLogin, bool &startMenu){
    clrscr();
    int senha, cpf, pos;
    char tecla;
    bool confirmadoCpf = false, confirmadoSenha = false, voltar = false;
    while(confirmadoCpf == false){
        gotoxy(5,2);
        cout << "CPF ";
        gotoxy(9,2);
        cin >> cpf;
        confirmadoCpf = verificarCpf(conta, cpf, pos);
        if(confirmadoCpf == false){
            gotoxy(5,2);
            cout << "CPF invalido";
            bool over = true;
            while(over == true){
                gotoxy(5, 4);
                cout << "Tente novamente";
                if(_kbhit()){
                    over = false;
                    tecla = getch();
                    if(tecla == 'm'){
                        confirmadoCpf = true;
                        confirmadoSenha = true;
                        startLogin = false;
                        startMenu = true;
                        voltar = true;
                    }
                }
                setCursor();
            }
            clrscr();
        }
    }
    clrscr();
    while(confirmadoSenha == false){
        gotoxy(5,2);
        cout << "CPF " << cpf;
        gotoxy(5,3);
        cout << "\nSenha ";
        cin >> senha;
        confirmadoSenha = verificarSenha(conta[pos], senha);
        if(confirmadoSenha == false){
            gotoxy(5,2);
            cout << "Senha invalida";
            bool over = true;
            while(over == true){
                gotoxy(5, 4);
                cout << "Tente novamente";
                if(_kbhit()){
                    over = false;
                    tecla = getch();
                    if(tecla == 'm'){
                        confirmadoSenha = true;
                        startLogin = false;
                        startMenu = true;
                        voltar = true;
                    }
                }
                setCursor();
            }
            clrscr();
        }
    }
    clrscr();
    if(voltar==false){
        gotoxy(5,3);
        cout << "Logado com sucesso";
        return pos;
    }else{
        return 0;
    }
}

void createAccount(banco conta[], int &numeroContas, int &usuarioLogado, bool &startCreate, bool &startMenu, bool &startMenuLogado, bool &firstDeposito, bool &startDeposito){
    clrscr();
    gotoxy(5,2);
    cout << "Nome ";
    cin >> conta[numeroContas].nome;
    gotoxy(5,3);
    cout << "CPF ";
    cin >> conta[numeroContas].cpf;
    gotoxy(5,4);
    cout << "Senha ";
    cin >> conta[numeroContas].senha;
    usuarioLogado = numeroContas;
    numeroContas++;
    startCreate = false;
    startDeposito = true;
    firstDeposito = true;
}

void menu(bool &startMenu, bool &startLogin, bool &startCreate, bool &exit){
    clrscr();
    int cursor = 4;
    gotoxy(5,2);
    cout << "Banco";
    gotoxy(5,4);
    cout << "Criar conta";
    gotoxy(5,5);
    cout << "Entrar";
    gotoxy(5,6);
    cout << "Sair";
    gotoxy(2,cursor);
    cout << ">>";
    while(startMenu){
        if(_kbhit()){
            char tecla = getch();
            switch (tecla){
            case 'w':
                if(cursor!=4){
                    gotoxy(2,cursor);
                    textcolor(BLACK,BLACK);
                    cout << "00";
                    cursor--;
                    gotoxy(2,cursor);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                }
            break;
            case 's':
                if(cursor!=6){
                    gotoxy(2,cursor);
                    textcolor(BLACK,BLACK);
                    cout << "00";
                    cursor++;
                    gotoxy(2,cursor);
                    textcolor(WHITE,BLACK);
                    cout << ">>";
                }
            break;
            case 13:
                switch (cursor){
                case 4:
                    startCreate = true;
                    startMenu = false;
                break;
                case 5:
                    startLogin = true;
                    startMenu = false;
                break;
                case 6:
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

int main(){
    banco conta[TAM];
    int numeroContas = 0, usuarioLogado;
    bool exit = false, startLogin = false, startMenu = true, startCreate = false, startMenuLogado = false, firstDeposito = false, startDeposito = false, startSaldo = false;
    while (exit==false){
        while(startMenu)
            menu(startMenu, startLogin, startCreate, exit);
        while(startLogin)
            usuarioLogado = login(conta, startLogin, startMenu);
        while(startCreate)
            createAccount(conta, numeroContas, usuarioLogado, startCreate, startMenu, startMenuLogado, firstDeposito, startDeposito);
        while(startMenuLogado)
            menuLogado(conta[usuarioLogado], startMenuLogado, startDeposito, startSaldo, startMenu);
        while(startSaldo)
            saldo(conta[usuarioLogado], startSaldo, startMenuLogado);
        while(startDeposito)
            deposito(conta[usuarioLogado], startMenuLogado, firstDeposito, startDeposito);
    }
}
