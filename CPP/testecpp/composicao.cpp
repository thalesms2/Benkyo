#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Endereco {
public:
    Endereco(string city, string state) : cidade(city), estado(state) {}
    string cidade;
    string estado;
};

class Cliente {
public:
    Cliente(string name, int age) : nome(name), idade(age) {}

    void insereEndereco(string cidade, string estado) {
        enderecos.push_back(Endereco(cidade, estado));
    }
    void listaEnderecos(){
        for(int i = 0; i < enderecos.size();i++){
            cout << enderecos[i].cidade << " " << enderecos[i].estado << endl;
        }
    }
    string nome;
    int idade;
    vector<Endereco> enderecos;
};

int main() {
    Cliente cliente1 {"Luiz", 32};
    cliente1.insereEndereco("Belo Horizonte", "MG");
    cout << cliente1.nome << endl;
    cliente1.listaEnderecos();

    Cliente cliente2 {"Maria", 55};
    cliente2.insereEndereco("Salvador", "BA");
    cliente2.insereEndereco("Rio de Janeiro", "RJ");
    cout << cliente2.nome << endl;
    cliente2.listaEnderecos();

    Cliente cliente3 {"Joao", 19};
    cliente3.insereEndereco("Sao Paulo", "SP");
    cout << cliente3.nome << endl;
    cliente3.listaEnderecos();
    return 0;
}