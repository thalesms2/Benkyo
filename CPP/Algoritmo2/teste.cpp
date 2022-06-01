char barraVertical = 186, barraHorizontal = 205, ponta1 = 201, ponta2 = 187, ponta3 = 200, ponta4 = 188;
        textcolor(WHITE, BLACK);
        for(int i=0;i<43;i++){
            gotoxy(9+i,2);
            cout << barraHorizontal;
            gotoxy(9+i,9);
            cout << barraHorizontal;
        }
        for(int i=0;i<6;i++){
            gotoxy(8,3+i);
            cout << barraVertical;
            gotoxy(52,3+i);
            cout << barraVertical;
        }
        gotoxy(8,2);
        cout << ponta1;
        gotoxy(52,2);
        cout << ponta2;
        gotoxy(8,9);
        cout << ponta3;
        gotoxy(52,9);
        cout << ponta4;
        