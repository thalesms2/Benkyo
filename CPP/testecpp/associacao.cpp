#include <iostream>
#include <string>
using namespace std;

class Caneta {
public:
    Caneta() {}
    Caneta(string name) : nome(name) {}
    void escrever() { cout << "Caneta esta escrevendo" << endl; }
    
    string nome;
};

class MaquinaDeEscrever {
public:
    MaquinaDeEscrever() {}
    void escrever() { cout << "Maquina esta escrevendo" << endl;; }
};

class Escritor {
public:
    Escritor(string name) : nome(name) {}
    void escrever() { ferramenta.escrever(); }
    void metodoAssociativo(Caneta tool) { ferramenta = tool; }
    
    string nome;
    Caneta ferramenta;
};

int main() {
    Escritor escritor {"Joao"};
    Caneta caneta {"Bic"};
    MaquinaDeEscrever maquina;
    escritor.metodoAssociativo(caneta);
    escritor.ferramenta.escrever();
    return 0;
}