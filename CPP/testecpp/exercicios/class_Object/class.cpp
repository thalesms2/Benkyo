#include <iostream>
#include <sstream>
using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    string toString() {
        stringstream ss;
        ss << day << "/" << month << "/" << year;
        return ss.str();
    }
};

int main() {
    Date d1;
    d1.day = 3;
    d1.month = 11;
    d1.year = 2023;
    
    Date d2;
    d2.day = 31;
    d2.month = 12;
    d2.year = 2022;
    
    cout << d1.toString() << endl;
    cout << d2.toString() << endl;


    return 0;
}