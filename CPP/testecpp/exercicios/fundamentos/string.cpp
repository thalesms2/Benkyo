#include <iostream>
using namespace std;

int main() {
    string title = "Mr. ";
    string name("John");
    string end(10, '!');
    
    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[2] << endl;
    cout << end << endl;

    // string concatenation

    cout << title + name << endl;
    name += " Doe";
    cout << name << endl;
    name.append("???");
    cout << name << endl;
    cout << title.append(name) << endl;
    return 0;
    
}