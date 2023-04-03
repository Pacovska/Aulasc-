#include <list>
#include <iostream>
#include <algorithm>

using namespace std;

void insere_ordenado(list<float> & l, const float & algo){
    l.push_back(algo);
    l.sort();
}

int main()
{
    list<float> lista = {1, 5, 3, 9, 8};
    float valor = 33;

    insere_ordenado(lista, valor);

    for (auto v: lista){
        cout << v << endl;
    }

    return 0;
}
