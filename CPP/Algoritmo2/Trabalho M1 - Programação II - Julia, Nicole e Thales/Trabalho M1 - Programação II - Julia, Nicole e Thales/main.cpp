// Feito por Thales, Nicole, Julia
#include <iostream>
#include <conio.h>
#include "conio2.h"
#include "codefun.h"
#include <windows.h>
#include <time.h>

using namespace std;

#define TAM 41 // Tamanho do campo do jogo

// Altera tamanho do console
void setSize(){
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT sr;
    COORD consoleSize;
    consoleSize.X = 100; consoleSize.Y = 41;
    sr.Top=sr.Left=0;
    sr.Right=100; sr.Bottom=41;
    SetConsoleWindowInfo(console, TRUE, &sr);
    SetConsoleScreenBufferSize(console, consoleSize);
}

// Faz com que o cursor fique invisivel e "lockado"
void setCursor(){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    //IN�CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    int CX=0, CY=0;
    COORD coord;
    coord.X = CX;
    coord.Y = CY;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Adiciona linhas de blocos ao mapa
void addBlocks(char mapa[][TAM], int lines){
    int contBlock = 0;
    for(int i=2;i<lines+2;i++){ // A partir da linha dois, soma o número de linhas
        for(int j=1;j<TAM-1;j++){
            switch(contBlock){
            case 0:
                mapa[i][j] = '1';
                contBlock++;
            break;
            case 1:
                mapa[i][j] = '2';
                contBlock++;
            break;
            case 2:
                mapa[i][j] = '3';
                contBlock = 0;
            break;
            }
        }
    }
}

// Sorteia as posições dos blocos aleatóriamente
void sortBlocks(char mapa[][TAM], int lines, int vet[], bool firstStage){
    if(firstStage == true){
        for(int i=0;i<11;i++){
            vet[i] = rand()%38+1;
            for(int j=i-1;j>=0;j--){
                if(vet[i] == vet[j]){
                    i--;
                }
            }
        }
    }else{
        for(int i=0;i<25;i++){
            vet[i] = rand()%65+1;
            for(int j=i-1;j>=0;j--){
                if(vet[i] == vet[j]){
                    i--;
                }
            }
        }
    }
}

// Troca as posições sorteadas por blocos diferentes, para que valham mais ou não quebrem
void changeBlocks(char mapa[][TAM], int lines, int vet[], bool firstStage){
    int cont = 0;
    for(int i=2;i<lines+2;i++){
        for(int j=1;j<TAM-1;j++){
            if(mapa[i][j] == '1'){
                cont++;
                if(firstStage == true){
                    for(int x=0;x<12;x++){
                        if(cont == vet[x]){
                            mapa[i][j] = '4';
                            mapa[i][j+1] = '5';
                            mapa[i][j+2] = '6';
                        }
                    }
                }else{
                    for(int x=0;x<22;x++){
                        if(cont == vet[x]){
                            mapa[i][j] = '4';
                            mapa[i][j+1] = '5';
                            mapa[i][j+2] = '6';
                        }
                    }
                    for(int x=22;x<25;x++){
                        if(cont == vet[x]){
                            mapa[i][j] = '7';
                            mapa[i][j+1] = '8';
                            mapa[i][j+2] = '9';
                        }
                    }
                }
            }
        }
    }
}

// Adiciona o rebatedor ao meio do mapa e retorna sua "posição" (eixo X)
int addPlayer(char mapa[][TAM]){
    for(int i=TAM/2-2;i<(TAM/2-2)+5;i++){
        mapa[TAM-2][i] = 'p';
    }
    return TAM/2-2;
}

// Adiciona a bola no mapa e retorna sua "posição" (eixo X)
int addBall(char mapa[][TAM], int lines){
    int initialPosBall = rand()%38+1; // Sorteia posição inicial de X
    mapa[lines+3][initialPosBall] = 'b';
    return initialPosBall; // Retorna posição inicial
}

// Constrói o mapa adiciona seus elementos já funcionais
void constructMap(char mapa[][TAM], int lines, int &initialPositionBallX, int &initialPositionPlayerX, bool firstStage){
    int sortedPositionBlocks[TAM]; // Posição dos blocos sorteados
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(j==0 or j==TAM-1){
                mapa[i][j] = 'w'; // Lados
            }else if (i==0){
                mapa[i][j] = 'f'; // Parte de cima do mapa
            }else if(i==TAM-1){
                mapa[i][j] = 'd'; // Parte de baixo do mapa
            }else{
                mapa[i][j] = '0'; // Resto do mapa - em branco
            }
        }
    }
    initialPositionPlayerX = addPlayer(mapa); // Coloca player no mapa
    addBlocks(mapa, lines); // Coloca blocos
    sortBlocks(mapa, lines, sortedPositionBlocks, firstStage); // Sorteia posições
    changeBlocks(mapa, lines, sortedPositionBlocks, firstStage); // Altera o valor dos blocos que tiveram a posição sorteada
    initialPositionBallX = addBall(mapa, lines); // Coloca a bola na posição inicial
}

// Exibe o mapa
void displayMap(char mapa[][TAM]){
    gotoxy(0, 0);
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            switch (mapa[i][j]){
            case '1':
                textcolor(BLUE, BLUE);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '2':
                textcolor(BLUE, BLUE);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '3':
                textcolor(BLUE, BLUE);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '4':
                textcolor(GREEN, GREEN);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '5':
                textcolor(GREEN, GREEN);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '6':
                textcolor(GREEN, GREEN);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '7':
                textcolor(RED, RED);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '8':
                textcolor(RED, RED);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '9':
                textcolor(RED, RED);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case 'p':
                textcolor(RED, RED);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case 'b':
                textcolor(WHITE, WHITE);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case 'w':
                textcolor(YELLOW, YELLOW);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case 'f':
                textcolor(YELLOW, YELLOW);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case 'd':
                textcolor(YELLOW, YELLOW);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            case '0':
                textcolor(BLACK, BLACK);
                cout<< mapa[i][j];
                cout<< mapa[i][j];
            break;
            }
        }
        cout << endl;
    }
    textcolor(WHITE, BLACK);
}

// Deixa aleatório a direção inicial da bolinha
void randomizeBegin(int &previousPos_x,  int &previousPos_y, int currentPos_x, int currentPos_y){
    int direction = rand()%3; // Sorteia a posição aleatória de 0 a 2 da bolinha
    switch (direction){
    case 0:
        previousPos_x = currentPos_x-1;
        previousPos_y = currentPos_y-1;
    break;
    case 1:
        previousPos_x = currentPos_x;
        previousPos_y = currentPos_y-1;
    break;
    case 2:
        previousPos_x = currentPos_x+1;
        previousPos_y = currentPos_y-1;
    break;
    }
}

// Calcula a movimentação da bolinha - Compara a posição atual e anterior da bola para saber a próxima
void ballMov(char mapa[][TAM], int currentPos_x, int currentPos_y, int previousPos_x,  int previousPos_y, int &returnX, int &returnY, bool &diagonal){
    if(currentPos_y > previousPos_y and currentPos_x > previousPos_x){ //Se a posição atual da bolinha em X e Y for maior que a anterior
        returnX = currentPos_x+1;
        returnY = currentPos_y+1;
    }else if(currentPos_y > previousPos_y and currentPos_x == previousPos_x){ // Se a posição atual da bolinha em Y for maior que a anterior e igual em X
        returnX = currentPos_x;
        returnY = currentPos_y+1;
    }else if(currentPos_y > previousPos_y and currentPos_x < previousPos_x){ // Se a posição atual de Y for maior que a anterior e a de X menor que a anterior
        returnY = currentPos_y+1;
        returnX = currentPos_x-1;
    }else if(currentPos_y < previousPos_y and currentPos_x > previousPos_x){ // Se a posição atual da bolinha em Y for menor que a anterior e em X maior
        returnY = currentPos_y-1;
        returnX = currentPos_x+1;
    }else if(currentPos_y < previousPos_y and currentPos_x == previousPos_x){ //Se a posição atual da bolinha em Y for menor que a anterior e em X for igual
        returnY = currentPos_y-1;
        returnX = currentPos_x;
    }else if(currentPos_y < previousPos_y and currentPos_x < previousPos_x){ // Se a posição atual da bolinha em X e Y for menor que a anterior
        returnY = currentPos_y-1;
        returnX = currentPos_x-1;
    }
}

// Todas as colisões centralizadas
bool ballCollision(char mapa[][TAM], int lines, int &currentPos_x, int &currentPos_y, int &previousPos_x,  int &previousPos_y, int returnX, int returnY, int &score, bool firsStage, int &lifes, bool diagonal, int &touch){
    int aux;
    if (mapa[returnY][returnX] == 'w'){ // Colisão com parede
        if(currentPos_y > previousPos_y and currentPos_x > previousPos_x){ // Diagonal p/ baixo, direita
            previousPos_x += 2;
            return true;
        }else if(currentPos_y > previousPos_y and currentPos_x < previousPos_x){ // Diagonal p/ baixo, esquerda
            previousPos_x -= 2;
            return true;
        }else if(currentPos_y < previousPos_y and currentPos_x > previousPos_x){ // Diagonal p/ cima, direita
            previousPos_x += 2;
            return true;
        }else if(currentPos_y < previousPos_y and currentPos_x < previousPos_x){ // Diagonal p/ cima, direita
            previousPos_x -= 2;
            return true;
        }
    }else if (mapa[returnY][returnX] == 'p'){ // Colisão com rebatedor
        if (mapa[returnY][returnX-1] == '0' or mapa[returnY][returnX-1] == 'w'){
            previousPos_x = currentPos_x+1;
            previousPos_y = currentPos_y+1;
            touch++;
            return true;
        }else if (mapa[returnY][returnX+1] == '0' or mapa[returnY][returnX+1] == 'w'){
            previousPos_x = currentPos_x-1;
            previousPos_y = currentPos_y+1;
            touch++;
            return true;
        }else if(mapa[returnY][returnX+1] == 'p' and mapa[returnY][returnX+1] == 'p'){
            previousPos_y += 2;
            touch++;
            return true;
        }
    }else if(mapa[returnY][returnX] == '1' or mapa[returnY][returnX] == '2' or mapa[returnY][returnX] == '3'){
        if(currentPos_y > previousPos_y){
            previousPos_y += 2;
        }else{
            previousPos_y -= 2;
        }
        if(mapa[returnY][returnX] == '1'){
            mapa[returnY][returnX] = '0';
            mapa[returnY][returnX+1] = '0';
            mapa[returnY][returnX+2] = '0';
            gotoxy(returnX*2, returnY);
            textcolor(BLACK, BLACK);
            cout << "000000";
        }else if(mapa[returnY][returnX] == '2'){
            mapa[returnY][returnX-1] = '0';
            mapa[returnY][returnX] = '0';
            mapa[returnY][returnX+1] = '0';
            aux = returnX-1;
            gotoxy(aux*2, returnY);
            textcolor(BLACK, BLACK);
            cout << "000000";
        }else if(mapa[returnY][returnX] == '3'){
            mapa[returnY][returnX] = '0';
            mapa[returnY][returnX-1] = '0';
            mapa[returnY][returnX-2] = '0';
            aux = returnX-2;
            gotoxy(aux*2, returnY);
            textcolor(BLACK, BLACK);
            cout << "000000";
        }
        if(firsStage == true){
            score += 1;
        }else{
            score += 5;
        }
        return true;
    }else if(mapa[returnY][returnX] == '4' or mapa[returnY][returnX] == '5' or mapa[returnY][returnX] == '6'){
        if(currentPos_y > previousPos_y){
            previousPos_y += 2;
        }else{
            previousPos_y -= 2;
        }
        if(mapa[returnY][returnX] == '4'){
            mapa[returnY][returnX] = '0';
            mapa[returnY][returnX+1] = '0';
            mapa[returnY][returnX+2] = '0';
            gotoxy(returnX*2, returnY);
            textcolor(BLACK, BLACK);
            cout << "000000";
        }else if(mapa[returnY][returnX] == '5'){
            mapa[returnY][returnX-1] = '0';
            mapa[returnY][returnX] = '0';
            mapa[returnY][returnX+1] = '0';
            aux = returnX-1;
            gotoxy(aux*2, returnY);
            textcolor(BLACK, BLACK);
            cout << "000000";
        }else if(mapa[returnY][returnX] == '6'){
            mapa[returnY][returnX] = '0';
            mapa[returnY][returnX-1] = '0';
            mapa[returnY][returnX-2] = '0';
            aux = returnX-2;
            gotoxy(aux*2, returnY);
            textcolor(BLACK, BLACK);
            cout << "000000";
        }
        if(firsStage == true){
            score += 5;
        }else{
            score += 10;
        }
        return true;
    }else if(mapa[returnY][returnX] == '7' or mapa[returnY][returnX] == '8' or mapa[returnY][returnX] == '9'){
        if(currentPos_y > previousPos_y){
            previousPos_y += 2;
        }else{
            previousPos_y -= 2;
        }
        return true;
    }else if (mapa[returnY][returnX] == 'f'){
        previousPos_y -= 2;
        return true;
    }else if (mapa[returnY][returnX] == 'd'){
        lifes--;
        touch = 0;
        currentPos_y = lines+3;
        currentPos_x = addBall(mapa, lines);
        mapa[currentPos_y][currentPos_x] = '0';
        randomizeBegin(previousPos_x, previousPos_y, currentPos_x, currentPos_y);
        return true;
    }else{
        return false;
    }
}

// Chamada principal da bola contém todas as suas funções
void updateBall(char mapa[][TAM], int lines, int &currentPos_x, int &currentPos_y, int &previousPos_x,  int &previousPos_y, int &score, bool firstStage, int &lifes, int &touch){
    bool again, diagonal;
    int returnX, returnY;
    mapa[currentPos_y][currentPos_x] = '0';
    do{
        ballMov(mapa, currentPos_x, currentPos_y, previousPos_x, previousPos_y, returnX, returnY, diagonal); // Apenas movimenta a bola conforme a sua POSIÇÃO ANTERIOR
        again = ballCollision(mapa, lines, currentPos_x, currentPos_y, previousPos_x, previousPos_y, returnX, returnY, score, firstStage, lifes, diagonal, touch); // Verifica colisão e altera a posição anterior para alterar o movimento
    }while(again == true); // Se tem colisão, recalcula o movimento da bola
    mapa[returnY][returnX] = 'b';
    previousPos_x = currentPos_x;
    previousPos_y = currentPos_y;
    currentPos_x = returnX;
    currentPos_y = returnY;
}

// Controle dentro do jogo
void control(char mapa[][TAM], int &currentPosX, int &currentPosY, bool &game, bool &mainMenu, bool &stageComplete){
    if(_kbhit()){
        char tecla = getch();
        int aux;
        switch (tecla){
        case 'a': // Esquerda
            if(mapa[currentPosY][currentPosX-1] == '0'){
                mapa[currentPosY][currentPosX-1] = 'p';
                mapa[currentPosY][currentPosX+4] = '0';
                aux = currentPosX+4;
                gotoxy(aux*2, currentPosY);
                textcolor(BLACK, BLACK);
                cout << "00";
                currentPosX--;
                gotoxy(currentPosX*2, currentPosY);
                textcolor(RED, RED);
                cout << "00";
                textcolor(YELLOW, BLACK);
            }
        break;
        case 'd': // Direita
            if(mapa[currentPosY][currentPosX+5] == '0'){
                mapa[currentPosY][currentPosX+5] = 'p';
                mapa[currentPosY][currentPosX] = '0';
                gotoxy(currentPosX*2, currentPosY);
                textcolor(BLACK, BLACK);
                cout << "00";
                currentPosX++;
                aux = currentPosX+4;
                gotoxy(aux*2, currentPosY);
                textcolor(RED, RED);
                cout << "00";
                textcolor(YELLOW, BLACK);
            }
        break;
        case 'm': // Volta para o menu
            game = false;
            mainMenu = true;
            stageComplete = true;
        break;
        }
    }
}

// Controle Menu
int control(int &gy, int &selector){
    char tecla = getch();
    switch (tecla){
    case 's': // Baixo
        if(gy!=19){
            textcolor(BLACK,BLACK);
            gotoxy(38,gy);
            cout<<"00";
            gy = gy+3;
        }
    break;
    case 'w': //Cima
        if(gy!=10){
            textcolor(BLACK,BLACK);
            gotoxy(38,gy);
            cout<<"00";
            gy = gy-3;
        }
    break;
    case 13: // Enter
        selector = gy;
    break;
    }
}

// Intro do menu
void abertura(){
    char aberturaArk[5][30]{1,1,1,0,1,1,1,0,1,0,1,0,1,1,1,0,1,0,0,1,0,1,1,1,0,1,0,1,1,0,
                            1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,
                            1,1,1,0,1,1,0,0,1,1,0,0,1,1,1,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,
                            1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,
                            1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,1,1,0,1,0,1,1,0}; // Título Arkanoid
    for(int i=0;i<5;i++){
        gotoxy(36,1+i);
        for(int j=0;j<30;j++){
            gotoxy(36+j,3+i);
            switch (i){
            case 0:
                textcolor(RED, 0); // Imprime linha em vermelho
            break;
            case 2:
                textcolor(BLUE,0); // Imprime linha em azul
            break;
            case 4:
                textcolor(WHITE, 0); // Imprime linha em branco
            break;
            }

            if(aberturaArk[i][j]==1){
                aberturaArk[i][j]=219;
            } // Se na matriz, o caractere for um, imprime tabela ASCII 219
            cout<<aberturaArk[i][j];
            Sleep(5);
        }
        cout<<"\n";
    }
}

// Tela de seleção
int menu(bool &mainMenu, bool &howPlay, bool &credits, bool &game, bool &mainGame){
    clrscr();
    int selector = 0;
    abertura();
    int gx =43, gy = 10; // Coordenadas menu
    gotoxy(gx,gy);
    textcolor (YELLOW, BLACK);
    cout<<"   Press to play"; // Pressione para jogar
    gotoxy(gx,gy+3);
    cout<<"    How to play"; // Tutorial
    gotoxy(gx,gy+6);
    cout<<"      Credits"; // Créditos
    gotoxy(gx,gy+9);
    cout<<"       Quit"; // Sair
    while(selector == 0){
        gotoxy(38,gy);
        textcolor(YELLOW,BLACK);
        cout<<">";
        if(_kbhit()){
            control(gy, selector); // Pega teclas de controle do menu
        }
        setCursor(); // Coloca cursor no lugar
    }
    switch (selector){ // Seletor do menu
    case 10: // Se enter em gy = 10, inicia jogo
        mainMenu = false;
        game = true;
        selector = 0;
    break;
    case 13: // Se enter em gy = 13, tutorial
        mainMenu = false;
        howPlay = true;
        selector = 0;
    break;
    case 16: // Se enter em gy = 16, créditos
        mainMenu = false;
        credits = true;
        selector = 0;
    break;
    case 19: // Se enter em gy = 19, sair
        mainMenu = false;
        mainGame = false;
        selector = 0;
        clrscr();
    break;
    }
}

// Tela de Perdeu
void gameOver(){
    bool over = true;
    clrscr(); // Limpa a tela
    gotoxy(44, 18);
    cout << "VOCE PERDEU!";
    while(over == true){
        gotoxy(35, 20);
        cout << "Pressione uma tecla para voltar";
        if(_kbhit()){ // Reconhece a tecla pressionada
            over = false;
        }
        setCursor();
    }

}

// Tela de ganhou
void vitoria(){
    bool over = true; // Se o jogo terminou
    clrscr();
    gotoxy(44, 18);
    cout << "VOCE GANHOU!";
    while(over == true){
        gotoxy(35, 20);
        cout << "Pressione uma tecla para voltar";
        if(_kbhit()){
            over = false; // Reconhece a tela pressionada
        }
        setCursor();
    }

}

//Ao completar a fase
void newLevel(bool &stageComplete, bool &firstStage, bool &secondStage){
    bool over = true;
    gotoxy(29, 18);
    cout << "VOCE COMPLETOU ESSA FASE!";
    while(over == true){
        gotoxy(22, 20);
        cout << "Pressione uma tecla para ir para proxima";
        if(_kbhit()){ // Pega a tecla para a próxima fase
            over = false;
        }
        setCursor();
    }
    stageComplete = true;
    firstStage = false;
    secondStage = true; // Inicia segunda fase
}

// Execução do jogo chamando todas suas funções
void jogo(bool &mainMenu, bool &game, bool &firstStage, bool &secondStage){
    clrscr();
    char mapa[TAM][TAM];
    int playerCurrentPos_X, playerCurrentPos_Y, ballCurrentPos_X, ballCurrentPos_Y, ballPreviousPos_X, ballPreviousPos_Y, lines, score=0, lifes=3, touch=0;
    while(game == true){ // Inicia jogo
        bool stageComplete = false;
        if(firstStage == true){
            lines = 3; // Se na primeira fase, 3 linhas de bloco
        }else{
            lines = 5; // Se na segunda, 5 linhas de bloco
        }
        ballCurrentPos_Y = lines+3;
        playerCurrentPos_Y = TAM-2;
        constructMap(mapa, lines, ballCurrentPos_X, playerCurrentPos_X, firstStage); // Constrói mapa
        randomizeBegin(ballPreviousPos_X, ballPreviousPos_Y, ballCurrentPos_X, ballCurrentPos_Y); // Posição aleatória da bola
        gotoxy(90, 10);
        cout << "Score"; // Pontuação
        gotoxy(90, 12);
        cout << "Lifes"; // Vidas
        displayMap(mapa);
        while(stageComplete == false){ // Enquanto não tiver completado a fase
            gotoxy(ballCurrentPos_X*2, ballCurrentPos_Y);
            textcolor(BLACK, BLACK);
            cout << "00";
            updateBall(mapa, lines, ballCurrentPos_X, ballCurrentPos_Y, ballPreviousPos_X,  ballPreviousPos_Y, score, firstStage, lifes, touch);
            gotoxy(ballCurrentPos_X*2, ballCurrentPos_Y); // Posição da bola
            textcolor(WHITE, WHITE);
            cout << "00";
            textcolor(YELLOW, BLACK);
            for(int i=0;i<4;i++){
                control(mapa,playerCurrentPos_X, playerCurrentPos_Y, game, mainMenu, stageComplete);
                if(touch<11){
                    Sleep(20);
                }else{
                    Sleep(10);
            }
            }
            if(score>99){ // Pontuação
                gotoxy(92,11);
                cout << score;
            }else if(score >9){
                gotoxy(93,11);
                cout << score;
            }else{
                gotoxy(94,11);
                cout << score;
            }
            if(score > 77 and firstStage == true){
                newLevel(stageComplete, firstStage, secondStage);
            }else if(score > 337 and secondStage == true){
                stageComplete = true;
                firstStage = true;
                secondStage = false;
                vitoria();
                game = false;
                mainMenu = true;
            }
            gotoxy(87,13);
            if(lifes == 3){ // Impressão de vidas
                cout << "<> <> <>";
            }else if(lifes == 2){
                cout << "   <> <>";
            }else if(lifes == 1){
                cout << "      <>";
            }else if(lifes == 0){ // Caso perca todas as vidas
                cout << "        ";
                gameOver();       // Exibe tela de gameOver e retorna ao menu
                clrscr();
                secondStage = false;
                firstStage = true;
                game = false;
                mainMenu = true;
                stageComplete = true;
            }
            setCursor();
        }
    }
}

// Tela "tutorial"
void howToPlay(bool &mainMenu, bool &howPlay){
    clrscr();
    bool onHowPlay = true;
    gotoxy(40, 15);
    cout << "Nao deixe a bola cair";
    gotoxy(19, 16);
    cout << "Utilize W e S para se movimentar no menu e ENTER para confirmar";
    gotoxy(30, 17);
    cout << "Utilize A e D para movimentar o rebatedor";
    gotoxy(36, 18);
    cout << "Utilize M para voltar ao menu";
    gotoxy(35,20);
    cout << "Precione uma tecla para voltar";
    while(onHowPlay == true){
        if(_kbhit()){
            onHowPlay = false;
            howPlay = false;
            mainMenu = true;
        }
    }
    clrscr();
}

//Tela de criadores
void creditos(bool &mainMenu, bool &credits){
    clrscr();
    bool onCredits = true;
    for(int i=0;i<20;i++){
        gotoxy(43,0+i);
        cout << "Jogo feito por:";
        gotoxy(41,1+i);
        cout << "Thales Minoru Sato";
        gotoxy(37,2+i);
        cout << "Nicole Migliorini Magagnin";
        gotoxy(44,3+i);
        cout << "Julia Disner";
        Sleep(80);
        if(i==19){
            while(onCredits == true){
                gotoxy(35,5+i);
                cout << "Pressione uma tecla para voltar";
                if(_kbhit()){ // Obtém a tecla para voltar
                    onCredits = false;
                    credits = false;
                    mainMenu = true;
                }
            }
        }
        clrscr();
    }
}

//Execução do código com *TREZE LINHAS* (Sem contar a abertura e fechamento do bloco main).
int main(){
    setSize();
    srand(time(NULL));
    bool mainGame = true, mainMenu = true, howPlay = false, credits = false, game = false, firstStage = true, secondStage = false;
    while(mainGame == true){ // Faz com que para sair tenha que utilizar o menu
        while(mainMenu == true) // Chama menu
            menu(mainMenu, howPlay, credits, game, mainGame);
        while(howPlay == true) // Chama "como jogar"
            howToPlay(mainMenu, howPlay);
        while(credits == true) // Créditos
            creditos(mainMenu, credits);
        while(game == true) // Chama jogo
            jogo(mainMenu, game, firstStage, secondStage);
    }
}
