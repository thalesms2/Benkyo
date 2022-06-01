#import <iostream>
#import <conio.h>
#import <windows.h>

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
	int i, j, cursor=1;
	bool obtMap1 = false, obtMap2 = false, obtMap3 = false, endGame = false, startMapa1 = false, startMapa2 = false, startMapa3 = false, startMenu = true, startMapSelec = false, startCred = false, startHow2Play = false;
	// Map 1
    char map1[11][10] = {
    char(201),char(205),char(205),char(205),char(205),char(205),char(205),char(205),char(205),char(187),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(186),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(255),char(186),
    char(200),char(205),char(205),char(205),char(205),char(205),char(205),char(205),char(205),char(188)};

	for (i=0;i<10;i++){
        for(j=0;j<11;j++){
            switch (map1[i][j]){
            case char(201):
                cout << char

            }
        }
        cout << "\n";
    }
    while (endGame == false){

    }
}