/*
        Faça um programa de controle de despesas e dados de um condomínio de apartamentos. Os
        dados de cada apartamento são armazenados em um vetor de estruturas. Para cada
        apartamento tem-se os seguintes dados:
        • Nome do responsável.
        • Número do apartamento.
        • Área em m2.
        • Número de moradores.
        • Valor a ser pago no mês.
        Crie a estrutura descrita acima e declare um vetor de estruturas, lembrando que o condomínio
        possui 40 apartamento. A seguir, crie um menu no main e:
        • Crie uma função que preencha o vetor acima, exceto o campo valor.
        • Informe a área total do condomínio.
        • Informe qual apartamento possui o maior número de moradores, e imprima seus dados.
        Caso haja mais que um, imprima as informações de todos.
        • Tenha uma opção para sair do programa.
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
