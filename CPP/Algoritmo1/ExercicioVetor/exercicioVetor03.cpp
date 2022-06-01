#include <iostream>
using namespace std;

int main()
{
   int vetor[5], maior=0, menor=0, igual=0, i;
   for (i=0;i<5;i++){
        cin >> vetor[i];
   }
   for (i=1;i<5;i++){
    if(vetor[i]>vetor[0]){
        maior++;
    }
    if(vetor[i]<vetor[0]){
        menor++;
    }
    if(vetor[i]==vetor[0]){
        igual++;
    }
   }
   cout << "Maior " << maior << " Menor " << menor << " Igual " << igual;
   return 0;
}
