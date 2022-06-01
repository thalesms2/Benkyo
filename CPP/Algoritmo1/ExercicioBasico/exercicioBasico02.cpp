#include <iostream>
using namespace std;
int main() {
  char letra;
  cout << "insira uma letra \n";
  cin >> letra;
  if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u'){
    cout << "A letra : "<< letra << " é uma vogal";
  }else{
    cout << "A letra : "<< letra << " é uma consoante";
  }
}