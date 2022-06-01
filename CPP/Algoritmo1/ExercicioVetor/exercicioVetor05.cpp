#include <iostream>
using namespace std;

int main()
{
    int a[20], b[20], c[20], i;
    for(i=0; i<20;i++){
			cin >> a[i] >> b[i];
      c[i] = a[i]-b[i];
    }
    for(i=0;i<20;i++){
        cout << c[i] << "\n";
    }
}
