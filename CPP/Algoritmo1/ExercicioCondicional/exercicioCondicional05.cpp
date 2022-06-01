#include <iostream>
using namespace std;
int main() {
  float salario, prestacao;
  cout << "Informe seu salario bruto: ";
  cin >> salario;
  cout << "Informe o valor da prestacao: ";
  cin >> prestacao;
  if(prestacao <= salario * 0.30){
    cout << "O emprestimo pode ser concebido";
  }else{
    cout << "O emprestimo nao pode ser concebido";
  }
}