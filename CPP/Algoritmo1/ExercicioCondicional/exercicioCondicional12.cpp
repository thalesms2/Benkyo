#include <iostream>
using namespace std;
int main() {
  int barometro, termometro;
  cout << "Informe como o Barometro esta: (0:Baixando | 1:Estacionario | 2: Subindo) ";
  cin >> barometro;
  cout << "Informe como o Termometro esta: (0:Baixando | 1:Estacionario | 2:Subindo) ";
  cin >> termometro;
  cout << "-----------------------------------------------------\n";
  if (barometro == 2 and termometro == 2){
    cout << "Tempo bom, ventos quentes e secos\n";
  }else if (barometro == 2 and termometro == 1){
    cout << "Tempo bom, ventos de leste frescos\n";
  }else if (barometro == 2 and termometro == 0){
    cout << "Tempo bom, ventos de sul a sudeste\n";
  }

  if (barometro == 1 and termometro == 2){
    cout << "Tempo mudando para bom, ventos de leste\n";
  }else if (barometro == 1 and termometro == 1){
    cout << "Tempo incerto, ventos variaveis\n";
  }else if (barometro == 1 and termometro == 0){
    cout << "Chuva provavel, ventos de sul a sudeste\n";
  }

  if (barometro == 0 and termometro == 2){
    cout << "Tempo instavel, aproximacao de frente \n";
  }else if (barometro == 0 and termometro == 1){
    cout << "Frente quente com chuvas provaveis\n";
  }else if (barometro == 0 and termometro == 0){
    cout << "Chuvas abundantes e ventos de sul a sudoeste fortes\n";
  }
  cout << "-----------------------------------------------------\n";
}