#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

#define LINES 29
#define COLUMN 119

int main (){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);
    short int CX=0, CY=0;
    COORD coord;
    coord.X = CX;
    coord.Y = CY;

	char menu[LINES][COLUMN] = {char(255)}, key;
	int i, j;
    bool endGame = false, startMenu = true, startMap1 = false;
    // Map 1 char(219) Wall | char(195) Player | char(91) Box | char(79) Goal
    char map1[9][11] = {
    char(255),char(219),char(219),char(219),char(219),char(219),char(219),char(219),char(219),char(219),char(219),
    char(255),char(219),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(219),
    char(255),char(219),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(219),
    char(255),char(219),char(195),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(219),
    char(255),char(219),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(219),
    char(255),char(219),char(255),char(255),char(255),char(255),char(91),char(255),char(255),char(255),char(219),
    char(255),char(219),char(255),char(255),char(255),char(255),char(255),char(255),char(79),char(255),char(219),
    char(255),char(219),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(219),
    char(255),char(219),char(219),char(219),char(219),char(219),char(219),char(219),char(219),char(219),char(219)};

    char ani[7][10] = {
        char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),
        char(255),char(255),char(255),char(255),char(45),char(45),char(255),char(255),char(255),char(255),
        char(255),char(255),char(255),char(47),char(255),char(255),char(92),char(255),char(255),char(255),
        char(255),char(255),char(255),char(179),char(255),char(255),char(179),char(255),char(255),char(255),
        char(255),char(255),char(255),char(179),char(255),char(255),char(179),char(255),char(255),char(255),
        char(255),char(255),char(255),char(92),char(255),char(255),char(42),char(255),char(255),char(255),
        char(255),char(255),char(255),char(255),char(45),char(45),char(255),char(255),char(255),char(255),
    };
    char ani1[7][10] = {
        char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),
        char(255),char(255),char(255),char(255),char(45),char(45),char(255),char(255),char(255),char(255),
        char(255),char(255),char(255),char(47),char(45),char(255),char(92),char(255),char(255),char(255),
        char(255),char(255),char(255),char(179),char(45),char(255),char(179),char(255),char(255),char(255),
        char(255),char(255),char(255),char(179),char(45),char(255),char(179),char(255),char(255),char(255),
        char(255),char(255),char(255),char(92),char(45),char(255),char(42),char(255),char(255),char(255),
        char(255),char(255),char(255),char(255),char(45),char(45),char(255),char(255),char(255),char(255),
    };
    while(endGame == false){
        while(startMenu == true){
            for (;;) {
                Sleep(1000);
                for(i=0;i<7;i++){
                    for(j=0;j<10;j++){
                        cout << ani[i][j];
                    }
                    cout << endl;
                }
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                Sleep(1000);
                for(i=0;i<7;i++){
                    for(j=0;j<10;j++){
                        cout << ani1[i][j];
                    }
                    cout << endl;
                }
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
            }
        }
        while(startMap1 == true){
            for (i=0;i<9;i++){
                for(j=0;j<11;j++){
                    switch (map1[i][j]){
                    case char(195): // Player
                        cout << char(195) << char(175);
                    break;
                    case char(91): // Box
                        cout << char(91) << char(93);
                    break;
                    case char(79): // Goal
                        cout << char(79) << char(79);
                    break;
                    case char(157): // Goal Completed
                        cout << char(157) << char(157);
                    break;
                    default: // Wall
                        cout << map1[i][j] << map1[i][j];
                    break;
                    }
                }
                cout << "\n";
            }
        }
    }

}