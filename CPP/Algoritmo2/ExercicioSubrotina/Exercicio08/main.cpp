#include <iostream>
using namespace std;
bool perfeito(int num){
    int res = 0
    for(int i=num;i>0;i--){
        if (i%num==0){
            res+=i;
        }
    }
    if (res==num){
        return true;
    }else{
        return false;
    }
}
bool perfeito(int num, int num2){
    int res = 0
        for(int i=num;i>0;i--){
            if (i%num==0){
                res+=i;
            }
        }
        if (res==num){
            return true;
        }else{
            return false;
        }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
