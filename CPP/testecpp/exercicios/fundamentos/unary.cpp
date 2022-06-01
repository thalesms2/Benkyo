#include <cstdio>
using namespace std;

int main() {
    int x = 2;
    int y = 1;

    x++; // postfix
    ++y; // prefix

    printf("%d %d\n", x, y);

    x--;
    --y;

    printf("%d %d\n", x, y);

    // x = 2 and y = 1 
    printf("%d", x-- == ++y);
    // x = 1 and y = 2
    
    return 0;
}