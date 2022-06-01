#include <iostream>
using namespace std;
#include <windows.h>
#include <time.h>
#include <conio.h>

template <int N, typename TIPO>
struct Agenda { /// Tipo agenda
    TIPO itens[N]; // lista de itens
    int quantidade; // quantidade atual de itens
};

struct Fisica { /// Tipo pessoa fisica
    int id;
    string CPF, nome, cel;
};

struct Juridica { /// Tipo pessoa juridica
    int id;
    string CNPJ, nome, tel;
};

template <int N, typename TIPO>
bool inicializa(Agenda <N, TIPO> &x) { /// Inicializa a agenda
    x.quantidade = 0; // zera a contagem de itens da agenda

    return true;
}

template <int N, typename TIPO>
bool verifica_ini(Agenda <N, TIPO> x) { /// Verifica se a agenda foi inicializada ou esta cheia
    if(x.quantidade < 0) { // agenda nao inicializada
        cout << "A agenda nao foi inicializada.";
        Sleep(2000);
        system("cls");
    } else if(x.quantidade >= N) { // agenda cheia
        cout << "A agenda esta cheia.";
        Sleep(2000);
        system("cls");
    } else { // agenda valida
        return true;
    }

    return false;
}

istream & operator >> (istream & is, Fisica &x) { /// Operador que preenche ficha de pessoa fisica
    x.id = rand()%1000 + 1; // id aleatorio

    gotoxy(9,4);
    is >> x.nome; // entra com o nome
    gotoxy(9,6);
    is >> x.CPF; // entra com o cpf
    gotoxy(9,8);
    is >> x.cel; // entra com o celular

    return is; // retorna entrada
}

istream & operator >> (istream & is, Juridica &x) { /// Operador que preenche ficha de pessoa juridica
    x.id = rand()%1000 + 1; // id aleatorio

    cout << "Nome da empresa: ";
    is >> x.nome; // entra com o nome da empresa
    cout << "CNPJ: ";
    is >> x.CNPJ; // entra com o cnpj
    cout << "Telefone comercial: ";
    is >> x.tel; // entra com o telefone

    return is; // retorna entrada
}

ostream & operator << (ostream & os, Fisica &x) { /// Operador que imprime a ficha de pessoa fisica
    os << "ID: ";
    os << x.id << "\n\n"; // imprime id
    os << "Nome: ";
    os << x.nome << endl; // imprime nome
    os << "CPF: ";
    os << x.CPF << endl; // imprime cpf
    os << "Numero de celular: ";
    os << x.cel << "\n\n\n"; // imprime celular

    return os; // retorna saida
}

ostream & operator << (ostream & os, Juridica &x) { /// Operador que imprime a ficha de pessoa juridica
    os << "ID: ";
    os << x.id << "\n\n"; // imprime id
    os << "Nome da empresa: ";
    os << x.nome << endl; // imprime nome da empresa
    os << "CNPJ: ";
    os << x.CNPJ << endl; // imprime cnpj
    os << "Telefone comercial: ";
    os << x.tel << "\n\n\n"; // imprime telefone

    return os;
}

template <int N, typename TIPO>
void insere(Agenda <N, TIPO> &x) { /// Insere um novo item na agenda
    cin >> x.itens[x.quantidade]; // usa o operador sobrecarregado para preencher o item
    x.quantidade++; // incrementa o contador e itens na agenda
}

template <int N, typename TIPO>
void remove_id(Agenda <N, TIPO> &x, int id) { /// Remove um item da agenda pelo id
    bool check = false; // binario que verifica se o id existe na lista

    for(int i=0; i < x.quantidade; i++) { // percorre a lista
        if(x.itens[i].id == id) { // checa se o id informado e igual ao do item verificado
            for(int j = i; j < x.quantidade - 1; j++) { // move o item removido para o final da agenda
                TIPO aux;

                aux = x.itens[j];
                x.itens[j] = x.itens[j + 1];
                x.itens[j + 1] = aux;
            }
            check = true; // indica que o id foi encontrado
        }
    }

    if(check)
        x.quantidade--; // diminui o numero de itens disponiveis
    else
        cout << "Esse ID nao esta na agenda."; // indica que o id nao foi encontrado
}

template <int N, typename TIPO>
void pesquisa(Agenda <N, TIPO> ag, int id) { /// Pesquisa um item da agenda pelo id
    bool check = false; // binario que verifica se o id existe na lista

    for(int i=0; i < ag.quantidade; i++) { // percorre a lista
        if(ag.itens[i].id == id) { // checa se o id informado e igual ao do item verificado
            cout << ag.itens[i]; // imprime o item pesquisado com operador sobrecarregado
            check = true; // indica que o id foi encontrado
            i = ag.quantidade; // escapa do laco de repeticao
        }
    }

    if(!check)
        cout << "Esse ID nao esta na agenda."; // indica que o id nao foi encontrado
}

template <int N, typename TIPO>
void pesquisa(Agenda <N, TIPO> ag, string nome) { /// Pesquisa um item da agenda pelo id
    bool check = false; // binario que verifica se o id existe na lista

    for(int i=0; i < ag.quantidade; i++) { // percorre a lista
        if(ag.itens[i].nome == nome) { // checa se o nome informado e igual ao do item verificado
            cout << ag.itens[i]; // imprime o item pesquisado com operador sobrecarregado
            check = true; // indica que o nome foi encontrado
            i = ag.quantidade; // escapa do laco de repeticao
        }
    }

    if(!check)
        cout << "Esse nome nao esta na agenda."; // indica que o nome nao foi encontrado
}

template <int N, typename TIPO>
void imprime_agenda(Agenda <N, TIPO> ag) { /// Imprime os itens disponiveis na agenda
    if(ag.quantidade == 0) { // verifica se a agenda esta vazia
        cout << "A agenda esta vazia.";
        Sleep(2000); // espera 2 seg
    } else {
        for(int i=0; i < ag.quantidade; i++) // laco percorre toda a zona preenchida
            cout << ag.itens[i]; // usa o operador sobrecarregado para imprimir a agenda

        cout << "Itens: " << ag.quantidade << "/" << N; // mostra os itens na agenda e o numero maximo de itens
        getch(); // aguarda uma tecla
    }
}

template <int N, typename TIPO>
Agenda <N, TIPO> reordena(Agenda <N, TIPO> x) { /// Reordena a agenda pelo numero do id
    bool troca = true; // indica se houve uma troca pelo laco de ordenacao

    for(int i = (x.quantidade - 1); i > 0; i--) { // diminui o topo da lista ao posicionar o maior item da iteracao no final
         troca = false;
        for(int j=0; j < i; j++) // percorre a lista ate o topo definido por i
            if(x.itens[j].id > x.itens[j + 1].id) {
                TIPO aux;

                troca = true; // indica que houve uma troca
                aux = x.itens[j];
                x.itens[j] = x.itens[j + 1]; // troca dois itens consecutivos de lugar
                x.itens[j + 1] = aux;
            }

        if(!troca)
            i = 0; // escapa do laco ao nao haver trocas em uma iteracao
    }


    return x; // retorna a agenda ordenada
}
