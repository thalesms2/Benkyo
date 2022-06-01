#include <iostream>

using namespace std;

int main()
{
    float comissao = 1, vendas = 0, salario, salarioTotal = 0;
    while (comissao>0){
        cout << "Informe a comissao mensal\n";
        cin >> comissao;
        vendas += comissao;
        if (comissao > 3000){
            salario = comissao*0.35;
        }else if (comissao>1500 and comissao <= 3000){
            salario = comissao*0.20;
        }else if (comissao<1500){
            salario = comissao*0.13;
        }
        cout << "O salario do vendedor sera de: " << salario << "\n";
        salarioTotal += salario;
    }
    cout << "O total de vendas e de: "<< vendas << " e o salario geral: " << salarioTotal;
}
