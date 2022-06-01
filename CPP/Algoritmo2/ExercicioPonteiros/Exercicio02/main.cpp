#include <iostream>
using namespace std;
int main(){
    int i=5, *p, **l;
    p = &i;
    l = &p;
    printf("i .......: %d \n", i);
    printf("p = &i \n");
    printf("&i ......: %x \n", &i);
    printf("p .......: %x \n", p);
    printf("*p+2 ....: %d \n", *p+2);
    printf("&p ......: %x \n", &p);
    printf("*&p .....: %d \n", *&p);
    printf("**&p ....: %d \n", **&p);
    printf("3**p ....: %d \n", 3**p);
    printf("**&p+4 ..: %d \n", **&p+4);
    printf("l .......: %x \n", l);
    printf("*l ......: %x \n", *l);
    return 0;
}
