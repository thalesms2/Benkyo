#include <iostream>
using namespace std;
int main() {
  int cont = 1, resp;
  while (cont<11){
    resp = 5 * cont;
    cout << "5X" << cont << "=" << resp << "\n";
    cont++;
  }
}