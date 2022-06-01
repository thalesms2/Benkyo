#include <iostream>
#include <conio.h>
#include "conio2.h"
#include "codefun.h"
#include <windows.h>
#include <time.h>

#define TAM 4

using namespace std;

int main(){
    srand(time(NULL));
    cout << rand()%39+1;
}
