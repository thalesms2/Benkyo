#import <iostream>
#import <conio.h>
#import <windows.h>

using namespace std;

#define TAM 20
#define L 15
#define C 20

int main (){
    //INICIO: COMANDOS PARA QUE O CURSOR NÃO FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR NÃO FIQUE PISCANDO NA TELA
    //INÍCIO: COMANDOS PARA REPOSICIONAR O CURSOR NO INÍCIO DA TELA
    short int CX=0, CY=0;
    COORD coord;
    coord.X = CX;
    coord.Y = CY;
    //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO INÍCIO DA TELA

	char m1[TAM][TAM] = {' '}, m2[TAM][TAM] = {' '}, m3[TAM][TAM] = {' '}, menu[TAM][TAM] = {' '}, tecla;
	int i, j, cursor=1, x1, y1, x2, y2, x3, y3, mapa=0;
	bool obtMap1 = false, obtMap2 = false, obtMap3 = false, endGame = false, startMapa1 = false, startMapa2 = false, startMapa3 = false, startMenu = true, startMapSelec = false, startCred = false, startHow2Play = false;
	/// MAPA 1
	// PAREDES
	m1[3][4] = m1[3][5] = m1[3][6] = m1[3][7] = m1[3][8] = m1[3][9] = m1[3][10] = m1[3][11] = m1[4][3] = m1[4][4] = m1[4][7] = m1[4][10] = m1[4][11] = m1[4][12] = m1[5][3] = m1[5][4] = m1[5][7] = m1[5][12] = m1[5][13] = m1[6][3] = m1[6][13] = m1[7][3] = m1[7][7] = m1[7][8] = m1[7][13] = m1[8][3] = m1[8][4] = m1[8][5] = m1[8][6] = m1[8][7] = m1[8][8] = m1[8][12] = m1[8][13] = m1[9][8] = m1[9][9] = m1[9][10] = m1[9][11] = m1[9][12] = '°';
	//OBJETIVO
	m1[5][5] = m1[5][10] = m1[6][9] = m1[6][11] = 'X';
	// CAIXA
	m1[5][6] = m1[5][10] = m1[6][9] = m1[6][11] = 'O';
	// PLAYER
	x1 = 6, y1 = 7;
	/// FIM MAPA 1

	/// MAPA2
    // PAREDES
    m2[3][6] = m2[3][7] = m2[3][8] = m2[3][9] = m2[3][10] = m2[3][11] = m2[3][12] = m2[4][6] =  m2[4][12] = m2[5][6] = m2[5][12] = m2[6][4] = m2[6][5] = m2[6][6] = m2[6][7] = m2[6][8] = m2[6][10] = m2[6][12] = m2[7][4] = m2[7][12] = m2[8][4] = m2[8][7] = m2[8][9] = m2[8][10] = m2[8][12] = m2[8][13] = m2[9][4] = m2[9][10] = m2[9][13] = m2[10][4] = m2[10][13] = m2[11][4] = m2[11][5] = m2[11][6] = m2[11][7] = m2[11][8] = m2[11][9] = m2[11][10] = m2[11][11] = m2[11][12] = m2[11][13] = '°';
	// OBJETIVO
	m2[9][5] = m2[9][6] = m2[10][5] = m2[10][6] = 'X';
	// CAIXA
	m2[5][8] = m2[7][6] = m2[8][8] = m2[9][7] = 'O';
	//PLAYER
    x2 = 5;
    y2 = 10;
	/// FIM MAPA2

	/// MAPA3
    // PAREDE
    m3[3][3] = m3[3][4] = m3[3][5] = m3[3][6] = m3[3][7] = m3[3][8] = m3[3][9] = m3[3][10] = m3[3][11] = m3[3][12] = m3[3][13] = m3[3][14] = m3[4][3] = m3[4][8] = m3[4][14] = m3[4][15] = m3[4][16] = m3[5][3] = m3[5][8] = m3[5][16] = m3[6][3] = m3[6][8] = m3[6][10] = m3[6][11] = m3[6][12] = m3[6][13] = m3[6][16] = m3[7][3] = m3[7][12] = m3[7][13] = m3[7][16] = m3[8][3] = m3[8][8] = m3[8][10] = m3[8][15] = m3[8][16] = m3[9][3] = m3[9][4] = m3[9][5] = m3[9][6] = m3[9][7] = m3[9][8] = m3[9][10] = m3[9][11] = m3[9][16] = m3[10][5] = m3[10][16] = m3[11][5] = m3[11][10] = m3[11][16] = m3[12][5] = m3[12][6] = m3[12][7] = m3[12][8] = m3[12][9] = m3[12][10] = m3[12][11] = m3[12][12] = m3[12][13] = m3[12][14] = m3[12][15] = m3[12][16] = '°';
    // OBJETIVO
    m3[4][4] = m3[4][5] = m3[5][4] = m3[5][5] = m3[6][4] = m3[6][5] = m3[7][4] = m3[7][5] = m3[8][4] = m3[8][5] = 'X';
    // CAIXA
    m3[5][10] = m3 [5][13] = m3[6][9] = m3 [8][13] = m3[9][12] = m3 [9][14] = m3[10][7] = m3[10][10] = m3[10][12] = m3[10][14] = 'O';
    //PLAYER
    x3 = 7;
    y3 = 10;
    /// FIM MAPA3

	while(endGame == false){
        while(startMenu == true){
            menu[cursor][1] = '>' ;
            /// DADOS DO MENU
            menu[0][0] = 'S'; menu[0][1] = 'A'; menu[0][2] = 'K'; menu[0][3] = 'O'; menu[0][4] = 'B'; menu[0][5] = 'A';menu[0][6] = 'N';
            menu[1][3] = 'P'; menu[1][4] = 'L'; menu[1][5] = 'A';menu[1][6] = 'Y';
            menu[2][3] = 'H'; menu[2][4] = 'O'; menu[2][5] = 'W';menu[2][6] = '2'; menu[2][7] = 'P'; menu[2][8] = 'L'; menu[2][9] = 'A';menu[2][10] = 'Y';
            menu[3][3] = 'C'; menu[3][4] = 'R'; menu[3][5] = 'E';menu[3][6] = 'D';
            menu[4][3] = 'E'; menu[4][4] = 'X'; menu[4][5] = 'I';menu[4][6] = 'T';
            /// FIM DADOS DO MENU

            for(i=0;i<TAM;i++){
                for(j=0;j<TAM;j++){
                    cout << menu[i][j];
                }
                cout << endl;
            }
            tecla = getch();
            switch(tecla){
            case 'w':
                if (cursor!=1){
                    menu[cursor][1] = ' ';
                    cursor--;
                }
            break;
            case 's':
                if (cursor!=4){
                    menu[cursor][1] = ' ';
                    cursor++;
                }
            break;
            case 'd':
                switch (cursor){
                case 1: ///PLAY
                    startMapSelec = true;
                    startMenu = false;
                break;
                case 2: ///HOW2TOPLAY
                    startHow2Play = true;
                    startMenu = false;
                break;
                case 3: ///CRED
                    startCred = true;
                    startMenu = false;
                break;
                case 4: ///EXIT
                    endGame = true;
                    startMenu = false;
                break;
                }
            break;
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
        while(startHow2Play == true){
            cout << "-------Menu-------\nW = Cima \nS = Baixo  \nD = Selecionar \n";
            cout << "-----No jogo----- \nW = Cima \nS = Baixo \nD = Selecionar \nA = Esquerda \nD = Direita \nR = Reiniciar Mapa \nM = Menu";
            tecla = getch();
            if (tecla != ' '){
                startHow2Play = false;
                startMenu = true;
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
        while(startCred == true){
           cout << "------Creditos------\nTrabalho feito por:\nThales Minoru Sato\nMatheus Boni Kist\nMichael Douglas";
            tecla = getch();
            if (tecla != ' '){
                startCred = false;
                startMenu = true;
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
        while(startMapSelec==true){
            cout << "-----Map Select-----" << endl;;
            if(obtMap1==true and obtMap2==true and obtMap3==true){
                cout << "---Todos os mapas--- \n--foram concluidos--\n------Parabens------\n";
            }
            switch (mapa){
            case 0:
                cout << "-------Map  1-------" << endl;
                if(obtMap1 == true){
                    cout << "--Mapa ja completo--" << endl;
                }
                for(i=0;i<TAM;i++){
                    for(j=0;j<TAM;j++){
                        cout << m1[i][j];
                    }
                    cout << endl;
                }
            break;
            case 1:
                cout << "-------Map  2-------" << endl;
                if(obtMap2 == true){
                    cout << "--Mapa ja completo--" << endl;
                }
                for(i=0;i<TAM;i++){
                    for(j=0;j<TAM;j++){
                        cout << m2[i][j];
                    }
                    cout << endl;
                }
            break;
            case 2:
                cout << "-------Map  3-------" << endl;
                if(obtMap3 == true){
                    cout << "--Mapa ja completo--" << endl;
                }
                for(i=0;i<TAM;i++){
                    for(j=0;j<TAM;j++){
                        cout << m3[i][j];
                    }
                    cout << endl;
                }
            break;
            }
            tecla = getch();
            switch (tecla){
            case 'w':
                if(mapa!=0){
                    mapa--;
                }
            break;
            case 's':
                if(mapa!=2){
                    mapa++;
                }
            break;
            case 'd':
                if(mapa==0){
                    startMapa1 = true;
                    startMapSelec = false;
                }else if(mapa==1){
                    startMapa2 = true;
                    startMapSelec = false;
                }else if(mapa==2){
                    startMapa3 = true;
                    startMapSelec = false;
                }
            break;
            case 'm':
                startMapSelec = false;
                startMenu = true;
            break;
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
        while(startMapa1==true){
            m1[x1][y1] = 'Y'; // Player position
            if (m1[5][5] == ' '){ /// Rewrite checkpoints
                m1[5][5] = 'X';
            }
            if (m1[5][10] == ' '){
                m1[5][10] = 'X';
            }
            if (m1[6][9] == ' '){
                m1[6][9] = 'X';
            }
            if(m1[6][11] == ' '){
                m1[6][11] = 'X';
            }
            for(i=0;i<TAM;i++){ /// Show map
                for(j=0;j<TAM;j++){
                    cout << m1[i][j];
                }
                cout << endl;
            }
            if (m1[5][5] == 'O' and m1[5][10] == 'O' and m1[6][9] == 'O' and m1[6][11] == 'O'){
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                cout<<"\n\n\n\n\n"<<"  =====VICTORY=====  ";
                cout<<endl<<" ==Press R to next== "<<endl;
                obtMap1 = true;
                tecla = getch();
                switch(tecla){
                case 'r':
                    startMapa1 = false;
                    if(obtMap2 == false){
                        startMapa2 = true;
                    }else if(obtMap3 == false){
                        startMapa3 = true;
                    }else{
                        startMenu = true;
                    }
                break;
                }
            }else{
                tecla = getch();
                switch(tecla){
                case 'w':
                    m1[x1][y1] = ' ';
                    x1--;
                    if (m1[x1][y1] == 'O'){
                        if (m1[x1-1][y1] == '°'){
                            x1++;
                        }else if(m1[x1-1][y1] == 'O'){
                            x1++;
                        }else{
                            m1[x1-1][y1] = 'O';
                        }
                    }else if (m1[x1][y1] == '°'){
                        x1++;
                    }
                break;
                case 's':
                    m1[x1][y1] = ' ';
                    x1++;
                    if (m1[x1][y1] == 'O'){
                        if (m1[x1+1][y1] == '°'){
                            x1--;
                        }else if(m1[x1+1][y1] == 'O'){
                            x1--;
                        }else{
                            m1[x1+1][y1] = 'O';
                        }
                    }else if (m1[x1][y1] == '°'){
                        x1--;
                    }
                break;
                case 'a':
                    m1[x1][y1] = ' ';
                    y1--;
                    if (m1[x1][y1] == 'O'){
                        if (m1[x1][y1-1] == '°'){
                            y1++;
                        }else if(m1[x1][y1-1] == 'O'){
                            y1++;
                        }else{
                            m1[x1][y1-1] = 'O';
                        }
                    }else if (m1[x1][y1] == '°'){
                        y1++;
                    }
                break;
                case 'd':
                    m1[x1][y1] = ' ';
                    y1++;
                    if (m1[x1][y1] == 'O'){
                        if (m1[x1][y1+1] == '°'){
                            y1--;
                        }else if(m1[x1][y1+1] == 'O'){
                            y1--;
                        }else{
                            m1[x1][y1+1] = 'O';
                        }
                    }else if (m1[x1][y1] == '°'){
                        y1--;
                    }
                break;
                case 'r':
                    for (i=0; i<TAM;i++){
                        for(j=0; j<TAM;j++){
                            m1[i][j] = ' ';
                        }
                    }
                    m1[3][4] = m1[3][5] = m1[3][6] = m1[3][7] = m1[3][8] = m1[3][9] = m1[3][10] = m1[3][11] = m1[4][3] = m1[4][4] = m1[4][7] = m1[4][10] = m1[4][11] = m1[4][12] = m1[5][3] = m1[5][4] = m1[5][7] = m1[5][12] = m1[5][13] = m1[6][3] = m1[6][13] = m1[7][3] = m1[7][7] = m1[7][8] = m1[7][13] = m1[8][3] = m1[8][4] = m1[8][5] = m1[8][6] = m1[8][7] = m1[8][8] = m1[8][12] = m1[8][13] = m1[9][8] = m1[9][9] = m1[9][10] = m1[9][11] = m1[9][12] = '°';
                    m1[5][5] = m1[5][10] = m1[6][9] = m1[6][11] = 'X';
                    m1[5][6] = m1[5][10] = m1[6][9] = m1[6][11] = 'O';
                    x1 = 6;
                    y1 = 7;
                break;
                case 'm':
                    startMapa1 = false;
                    startMenu = true;
                break;
                }
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
        while(startMapa2==true){
            m2[x2][y2] = 'Y'; // Player position
            if (m2[9][5] == ' '){ /// Rewrite checkpoints
                m2[9][5] = 'X';
            }
            if (m2[9][6] == ' '){
                m2[9][6] = 'X';
            }
            if (m2[10][5] == ' '){
                m2[10][5] = 'X';
            }
            if (m2[10][6] == ' '){
                m2[10][6] = 'X';
            }
            for(i=0;i<TAM;i++){ /// Show map
                for(j=0;j<TAM;j++){
                    cout << m2[i][j];
                }
                cout << endl;
            }
            if (m2[9][5] == 'O' and m2[9][6] == 'O' and m2[10][5] == 'O' and m2[10][6] == 'O'){
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                cout<<"\n\n\n\n\n"<<"  =====VICTORY=====  ";
                cout<<endl<<" ==Press R to next== "<<endl;
                obtMap2 = true;
                tecla = getch();
                switch(tecla){
                case 'r':
                    startMapa2 = false;
                    if(obtMap1 == false){
                        startMapa1 = true;
                    }else if(obtMap3 == false){
                        startMapa3 = true;
                    }else{
                        startMenu = true;
                    }
                break;
                }
            }else{
                tecla = getch();
                switch(tecla){
                case 'w':
                    m2[x2][y2] = ' ';
                    x2--;
                    if (m2[x2][y2] == 'O'){
                        if (m2[x2-1][y2] == '°'){
                            x2++;
                        }else if(m2[x2-1][y2] == 'O'){
                            x2++;
                        }else{
                            m2[x2-1][y2] = 'O';
                        }
                    }else if (m2[x2][y2] == '°'){
                        x2++;
                    }
                break;
                case 's':
                    m2[x2][y2] = ' ';
                    x2++;
                    if (m2[x2][y2] == 'O'){
                        if (m2[x2+1][y2] == '°'){
                            x2--;
                        }else if(m2[x2+1][y2] == 'O'){
                            x2--;
                        }else{
                            m2[x2+1][y2] = 'O';
                        }
                    }else if (m2[x2][y2] == '°'){
                        x2--;
                    }
                break;
                case 'a':
                    m2[x2][y2] = ' ';
                    y2--;
                    if (m2[x2][y2] == 'O'){
                        if (m2[x2][y2-1] == '°'){
                            y2++;
                        }else if(m2[x2][y2-1] == 'O'){
                            y2++;
                        }else{
                            m2[x2][y2-1] = 'O';
                        }
                    }else if (m2[x2][y2] == '°'){
                        y2++;
                    }
                break;
                case 'd':
                    m2[x2][y2] = ' ';
                    y2++;
                    if (m2[x2][y2] == 'O'){
                        if (m2[x2][y2+1] == '°'){
                            y2--;
                        }else if(m2[x2][y2+1] == 'O'){
                            y2--;
                        }else{
                            m2[x2][y2+1] = 'O';
                        }
                    }else if (m2[x2][y2] == '°'){
                        y2--;
                    }
                break;
                case 'r':
                    for (i=0; i<TAM;i++){
                        for(j=0; j<TAM;j++){
                            m2[i][j] = ' ';
                        }
                    }
                    m2[3][6] = m2[3][7] = m2[3][8] = m2[3][9] = m2[3][10] = m2[3][11] = m2[3][12] = m2[4][6] =  m2[4][12] = m2[5][6] = m2[5][12] = m2[6][4] = m2[6][5] = m2[6][6] = m2[6][7] = m2[6][8] = m2[6][10] = m2[6][12] = m2[7][4] = m2[7][12] = m2[8][4] = m2[8][7] = m2[8][9] = m2[8][10] = m2[8][12] = m2[8][13] = m2[9][4] = m2[9][10] = m2[9][13] = m2[10][4] = m2[10][13] = m2[11][4] = m2[11][5] = m2[11][6] = m2[11][7] = m2[11][8] = m2[11][9] = m2[11][10] = m2[11][11] = m2[11][12] = m2[11][13] = '°';
                    m2[9][5] = m2[9][6] = m2[10][5] = m2[10][6] = 'X';
                    m2[5][8] = m2[7][6] = m2[8][8] = m2[9][7] = 'O';
                    x2 = 5;
                    y2 = 10;
                break;
                case 'm':
                    startMapa2 = false;
                    startMenu = true;
                break;
                }
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
        while(startMapa3==true){
            m3[x3][y3] = 'Y'; // Player position
            if (m3[4][4] == ' '){ /// Rewrite checkpoints
                m3[4][4] = 'X';
            }
            if (m3[4][5] == ' '){
                m3[4][5] = 'X';
            }
            if (m3[5][4] == ' '){
                m3[5][4] = 'X';
            }
            if (m3[5][5] == ' '){
                m3[5][5] = 'X';
            }
            if (m3[6][4] == ' '){
                m3[6][4] = 'X';
            }
            if (m3[6][5] == ' '){
                m3[6][5] = 'X';
            }
            if (m3[7][4] == ' '){
                m3[7][4] = 'X';
            }
            if (m3[7][5] == ' '){
                m3[7][5] = 'X';
            }
            if (m3[8][4] == ' '){
                m3[8][4] = 'X';
            }
            if (m3[8][5] == ' '){
                m3[8][5] = 'X';
            }
            for(i=0;i<TAM;i++){ /// Show map
                for(j=0;j<TAM;j++){
                    cout << m3[i][j];
                }
                cout << endl;
            }
            if (m3[4][4] == 'O' and m3[4][5] == 'O' and m3[5][4] == 'O' and m3[5][5] == 'O' and m3[6][4] == 'O' and m3[6][5] == 'O' and m3[7][4] == 'O' and m3[7][5] == 'O' and m3[8][4] == 'O' and m3[8][5] == 'O'){
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                cout<<"\n\n\n\n\n"<<"  =====VICTORY=====  ";
                cout<<endl<<" ==Press R to next== "<<endl;
                obtMap3 = true;
                tecla = getch();
                switch(tecla){
                case 'r':
                    startMapa3 = false;
                    if(obtMap1 == false){
                        startMapa1 = true;
                    }else if(obtMap2 == false){
                        startMapa2 = true;
                    }else{
                        startMenu = true;
                    }
                break;
                }
            }else{
                tecla = getch();
                switch(tecla){
                case 'w':
                    m3[x3][y3] = ' ';
                    x3--;
                    if (m3[x3][y3] == 'O'){
                        if (m3[x3-1][y3] == '°'){
                            x3++;
                        }else if(m3[x3-1][y3] == 'O'){
                            x3++;
                        }else{
                            m3[x3-1][y3] = 'O';
                        }
                    }else if (m3[x3][y3] == '°'){
                        x3++;
                    }
                break;
                case 's':
                    m3[x3][y3] = ' ';
                    x3++;
                    if (m3[x3][y3] == 'O'){
                        if (m3[x3+1][y3] == '°'){
                            x3--;
                        }else if(m3[x3+1][y3] == 'O'){
                            x3--;
                        }else{
                            m3[x3+1][y3] = 'O';
                        }
                    }else if (m3[x3][y3] == '°'){
                        x3--;
                    }
                break;
                case 'a':
                    m3[x3][y3] = ' ';
                    y3--;
                    if (m3[x3][y3] == 'O'){
                        if (m3[x3][y3-1] == '°'){
                            y3++;
                        }else if(m3[x3][y3-1] == 'O'){
                            y3++;
                        }else{
                            m3[x3][y3-1] = 'O';
                        }
                    }else if (m3[x3][y3] == '°'){
                        y3++;
                    }
                break;
                case 'd':
                    m3[x3][y3] = ' ';
                    y3++;
                    if (m3[x3][y3] == 'O'){
                        if (m3[x3][y3+1] == '°'){
                            y3--;
                        }else if(m3[x3][y3+1] == 'O'){
                            y3--;
                        }else{
                            m3[x3][y3+1] = 'O';
                        }
                    }else if (m3[x3][y3] == '°'){
                        y3--;
                    }
                break;
                case 'r':
                    for (i=0; i<TAM;i++){
                        for(j=0; j<TAM;j++){
                            m3[i][j] = ' ';
                        }
                    }
                    m3[3][3] = m3[3][4] = m3[3][5] = m3[3][6] = m3[3][7] = m3[3][8] = m3[3][9] = m3[3][10] = m3[3][11] = m3[3][12] = m3[3][13] = m3[3][14] = m3[4][3] = m3[4][8] = m3[4][14] = m3[4][15] = m3[4][16] = m3[5][3] = m3[5][8] = m3[5][16] = m3[6][3] = m3[6][8] = m3[6][10] = m3[6][11] = m3[6][12] = m3[6][13] = m3[6][16] = m3[7][3] = m3[7][12] = m3[7][13] = m3[7][16] = m3[8][3] = m3[8][8] = m3[8][10] = m3[8][15] = m3[8][16] = m3[9][3] = m3[9][4] = m3[9][5] = m3[9][6] = m3[9][7] = m3[9][8] = m3[9][10] = m3[9][11] = m3[9][16] = m3[10][5] = m3[10][16] = m3[11][5] = m3[11][10] = m3[11][16] = m3[12][5] = m3[12][6] = m3[12][7] = m3[12][8] = m3[12][9] = m3[12][10] = m3[12][11] = m3[12][12] = m3[12][13] = m3[12][14] = m3[12][15] = m3[12][16] = '°';
                    m3[4][4] = m3 [4][5] = m3[5][4] = m3 [5][5] = m3[6][4] = m3 [6][5] = m3[7][4] = m3 [7][5] = m3[8][4] = m3 [8][5] = 'X';
                    m3[5][10] = m3 [5][13] = m3[6][9] = m3 [8][13] = m3[9][12] = m3 [9][14] = m3[10][7] = m3[10][10] = m3[10][12] = m3[10][14] = 'O';
                    x3 = 7;
                    y3 = 10;
                break;
                case 'm':
                    startMapa3 = false;
                    startMenu = true;
                break;
                }
            }
            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }
	}
}
