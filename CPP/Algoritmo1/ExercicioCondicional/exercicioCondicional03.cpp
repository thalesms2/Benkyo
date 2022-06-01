#include <iostream>
using namespace std;
int main() {
  float nota1, nota2, media;
  int presenca, aula, frequencia;
  cout << "Informe a primeira nota do aluno: \n";
  cin >> nota1;
  cout << "Informe a segunda nota do aluno: \n";
  cin >> nota2;
  cout << "Informe quantas aulas houve: \n";
  cin >> aula;
  cout << "Informe quantas aulas o aluno compareceu: \n";
  cin >> presenca;
  media = (nota1 + nota2)/2;
  if (presenca >= aula * 0.75){
    if (media >= 6){
      cout << "Aluno esta aprovado!";
    }else{
      cout << "Aluno nao alcancou a media minima para ser aprovado";
    }
  }else{
    cout << "Aluno nao tem a frequencia minima para ser aprovado";
  }
}