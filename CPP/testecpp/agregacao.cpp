#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Produto {
public:
    Produto(string param, double value) : nome(param), valor(value) {}
    string getName() { return nome; }
    double getValue() { return valor; }
private:
    string nome;
    double valor;
};

class CarrinhoDeCompras {
public:
    CarrinhoDeCompras() {}
    
    void inserir_produto(Produto produto) { produtos.push_back(produto); }
    void lista_produto(){
        for(int i = 0; i < produtos.size();i++){
            cout << "Produto: " << produtos[i].getName() << " | R$" << produtos[i].getValue() << endl;
        }
    }
private:
    vector<Produto> produtos;
};


int main() {
    CarrinhoDeCompras carrinho;
    Produto p1 {"Camiseta", 50};
    Produto p2 {"iPhone", 10000};
    Produto p3 {"Caneca", 15};
    carrinho.inserir_produto(p1);
    carrinho.inserir_produto(p2);
    carrinho.inserir_produto(p3);
    carrinho.lista_produto();
    return 0;
}