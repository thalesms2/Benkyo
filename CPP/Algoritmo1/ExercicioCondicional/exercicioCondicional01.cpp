#include <iostream>
using namespace std;
int main() {
  int primeiro, segundo, result, resultInv;
  cout << "Informe o primeiro valor \n";
  cin >> primeiro;
  cout << "Informe o segundo valor \n";
  cin >> segundo;
  result = primeiro % segundo;
  resultInv = segundo % primeiro;
  if (result == 0 or resultInv == 0){
    cout << "Os dois numeros informados sao divisiveis";
  }else{
    cout << "Os dois numeros informados nao sao divisiveis";
  }
}