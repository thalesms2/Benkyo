#include <iostream>
using namespace std;
int main() {
  bool genero;
  float altura, ideal;
  cout << "Informe sua altura: \n";
  cin >> altura;
  cout << "Informe seu sexo:(0:Feminino|1:Masculino)";
  cin >> genero;
  if (genero == 0){
    ideal = 72.7 * altura - 58;
  }else{
    ideal = 62.1 * altura - 44.7;
  }
  cout << "Seu peso ideal e: " << ideal << "kg";
}