#include<cstdio>

int main() {
    double price = 99.80;
    double tax = 0.08;
    
    double finalPrice = price * (1 + tax);

    printf("The Final price is %.2f.", finalPrice);
    return 0;
}