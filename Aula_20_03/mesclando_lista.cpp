#include <list>
#include <iostream>

using namespace std;

list<int> mescla(const list<int> & l1, const list<int> & l2){
    list<int> lista = l1;
    list<int> lista2 = l2;

    lista.merge(lista2);   

    return lista;
}