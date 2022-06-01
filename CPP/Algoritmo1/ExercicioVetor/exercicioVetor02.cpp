#include <iostream>
using namespace std;

int main()
{
    float media[10], nota1, nota2, nota3, mediaSala=0;
    int maiorMedia=0, i;
    for(i=0;i<10;i++){
        cin >> nota1 >> nota2 >> nota3;
        media[i] = (nota1+nota2+nota3)/3;
        mediaSala += media[i];
    }
    mediaSala /= 10;
    for(i=0;i<10;i++){
        if(media[i]>mediaSala){
            maiorMedia++;
        }
    }
    cout << maiorMedia;
    return 0;
}
