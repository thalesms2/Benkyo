#include <iostream>
using namespace std;
void vogal(char letra){
    if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u'){
        cout << "Letra informada eh uma vogal";
    }else{
        cout << "Letra informada eh uma consoante";
    }
}
int main(){
    vogal('a');
}
