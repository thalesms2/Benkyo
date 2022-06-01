#include <iostream>
using namespace std;

class Construtor {
public:
    Construtor() {}

    Construtor(int param) : num(param) {}
private:
    int num;
};

class Destrutor {
public:
    Destrutor() {}
    
    Destrutor(int param) : num(param) {}
    ~Destrutor() {
        cout << "Numero " << num << " será deletado" << endl;
    }
    int getNum() {
        return num;
    }
private:
    int num;
};

int main(){
    Construtor cons;
    Construtor cons2 {2};
    Destrutor dest2 {5};
    cout << dest2.getNum() << " Teste" << endl;
    dest2.~Destrutor();
    return 0;
}