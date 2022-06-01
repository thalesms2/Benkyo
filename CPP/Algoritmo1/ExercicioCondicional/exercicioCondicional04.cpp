#include <iostream>
using namespace std;
int main() {
  float porcentagem, produto; 
  cout << "Informe uma porcentagem \n";
  cin >> porcentagem;
  cout << "Informe o valor do produto \n";
  cin >> produto;
  porcentagem = porcentagem / 100;
  if (porcentagem <= 0.25){
    produto = produto + produto * porcentagem;
  }else{
    produto = produto - produto * porcentagem;
  }
  cout << "O valor do produto final e: " << produto;
}