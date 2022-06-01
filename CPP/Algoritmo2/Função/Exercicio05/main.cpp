#include <iostream>
using namespace std;
void procedimento(int x){
    for(int cont = 1;cont<=10;cont++){
        cout << x << "X" << cont << "=" << x*cont << endl;
    }
}
int main(){
    procedimento(6);
}
