#include <iostream>
using namespace std;

int main() {
    
    int month;
    cout << "Enter a month: ";
    cin >> month;
    
    int numberOfDays;

    switch(month){
        case 2:
            numberOfDays = 28;
            break;
        case 5: case 3:
            numberOfDays = 31;
            break;
        case 1:
        case 4:
            numberOfDays = 30;
            break;
        default:
            numberOfDays = -1;
            break;
    }

    cout << numberOfDays << " days" << endl;

    return 0;
}