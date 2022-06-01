#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, num;
    cout << "Informe o limite ";
    cin >> num;
    while (c<num){
      c = a + b;
      cout << c << "\n";
      a = b;
      b = c; 
    }
    return 0;
}
