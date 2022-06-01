#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int { return x + y; };
auto sub = [](int x, int y) { return x - y; };

int main() {
    
    cout << add(10, 20) << endl;
    cout << sub(10, 5) << endl;
    return 0;
}