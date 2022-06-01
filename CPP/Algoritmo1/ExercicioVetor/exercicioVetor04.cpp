#include <iostream>
using namespace std;

int main()
{
    int vetor[10], i;
    for(i=0; i<10;i++){
        cin >> vetor[i];
    }
    for(i=9;i>-1;i--){
        cout << vetor[i] << "\n";
    }
    return 0;
}
