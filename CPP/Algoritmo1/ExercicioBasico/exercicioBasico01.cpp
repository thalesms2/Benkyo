#include <iostream>
using namespace std;
int main() {
  int hora, minuto;
  cout << "Informe a hora ";
  cin >> hora;
  cout << "Informe os minutos ";
  cin >> minuto;
  if (hora>=0 and hora<24 and minuto>=0 and minuto<60){
    cout << "A hora informada e valida";
  }else{
    cout << "A hora informada e invalida";
  }
}