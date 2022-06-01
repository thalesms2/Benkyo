/*
        Fa�a um programa de controle de despesas e dados de um condom�nio de apartamentos. Os
        dados de cada apartamento s�o armazenados em um vetor de estruturas. Para cada
        apartamento tem-se os seguintes dados:
        � Nome do respons�vel.
        � N�mero do apartamento.
        � �rea em m2.
        � N�mero de moradores.
        � Valor a ser pago no m�s.
        Crie a estrutura descrita acima e declare um vetor de estruturas, lembrando que o condom�nio
        possui 40 apartamento. A seguir, crie um menu no main e:
        � Crie uma fun��o que preencha o vetor acima, exceto o campo valor.
        � Informe a �rea total do condom�nio.
        � Informe qual apartamento possui o maior n�mero de moradores, e imprima seus dados.
        Caso haja mais que um, imprima as informa��es de todos.
        � Tenha uma op��o para sair do programa.
*/

#include <iostream>
#include <time.h>
#include <windows.h>
#include "codefun.h"
using namespace std;

struct ficha{
    char nomeResponsavel[100], nomeApartamento[100];
    int area, numMoradores;
    float valor;
};

void preencher(ficha &apartamento){
    cin >> apartamento.nomeResponsavel;
    cin >> apartamento.nomeApartamento;
    apartamento.area  = rand()%1000+1;
    apartamento.numMoradores = rand()%10+1;
    apartamento.valor = rand()%10000+1;
}

int main(){
    srand(time(NULL));
    ficha apartamento;
    preencher(apartamento);
    cout << apartamento.area;
}
