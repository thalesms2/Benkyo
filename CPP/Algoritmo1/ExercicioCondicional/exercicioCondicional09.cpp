#include <iostream>
using namespace std;
int main() {
  float preco, aumento, imposto, precoImposto;
  int categoria, situacao;
  cout << "Informe o preco do produto: \n";
  cin >> preco;
  cout << "Informe sua categoria (0:Limpeza | 1:Alimentacao | 2:Vestuario)";
  cin >> categoria;
  cout << "Informe se o produto precisa ou nao de refrigeracao (0:Precisa de regrigeracao | 1:Nao precisa de refrigeracao) \n";
  cin >> situacao;
  if (preco <= 25){
    if (categoria == 0){
      aumento = 0.05;
    }else if (categoria == 1){
      aumento = 0.08;
    }else if (categoria == 2){
      aumento = 0.1;
    }
  }
  if (preco > 25){
    if (categoria == 0){
      aumento = 0.12;
    }else if (categoria == 1){
      aumento = 0.15;
    }else if (categoria == 2){
      aumento = 0.18;
    }
  }
  if (categoria == 1 or situacao == 0){
    imposto = 0.05;
  }else{
    imposto = 0.08;
  }
  precoImposto = preco + preco * aumento;
  imposto = precoImposto * imposto;
  cout << "O valor do imposto sera de: R$" << imposto << "\n";
  precoImposto = precoImposto + imposto;
  cout << "O preco com aumento e imposto: R$" << precoImposto << "\n";
  if (precoImposto <= 50){
    cout << "O produto e Barato";
  }else if (precoImposto > 50 and precoImposto < 120){
    cout << "O produto e Normal";
  }else if (precoImposto >= 120){
    cout << "O produto e Caro";
  }
}