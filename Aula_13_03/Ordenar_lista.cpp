#include <list>
#include <iostream>

using namespace std;

bool ordenada(const list<int> & umaLista){
    int atual = 0, tamanho = umaLista.size();
    list<int> teste_da_lista = umaLista;

    if (tamanho == 0 || tamanho == 1) return true;

    for(int valor: teste_da_lista){
        if (atual > valor){
            return false;
            break;
        }
        atual = valor;
    }

    return true;
}

int main()
{
    list<int> lista = {1, 2, 3, 4, 5, 6};
    cout << ordenada(lista);
    return 0;
}

