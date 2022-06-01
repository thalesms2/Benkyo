#include <iostream>
using namespace std;
int main() {
  int tipo;
  float m3, valor;
  cout << "Que tipo de consumidor voce e: (0:Residencial | 1:Comercial | 2:Industrial)\n";
  cin >> tipo;
  cout << "Quantos m³ de agua foi gasto: \n";
  cin >> m3;
  if (tipo == 0){
    valor = m3 * 0.05 + 5;
  }else if(tipo == 1){
    if(m3>80){
      valor = (m3 - 80) * 0.03 + 500;
    }else{
      valor = 500;
    }
  }else if(tipo == 2){
    if(m3>100){
      valor = (m3 - 100) * 0.04 + 800;
    }else{
      valor = 800;
    }
  }
  cout << "O valor da conta de agua e de R$" << valor;
}