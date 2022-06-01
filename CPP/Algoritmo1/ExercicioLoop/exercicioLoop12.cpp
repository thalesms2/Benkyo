#include <iostream>
using namespace std;
int main() {
  int a, b, asw = 0, cont = 0;
  cin >> a;
  cin >> b;
  while (cont<b){
    asw = asw + a;
    cont++;
  }
  cout << asw;
}