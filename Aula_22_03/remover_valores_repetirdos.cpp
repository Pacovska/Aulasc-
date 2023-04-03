#include <iostream>
#include <list>
#include <fstream>

using namespace std;

void unicos(list<string> & l){
    auto it = l.begin();
    
    while (it != l.end()) {
        auto next = std::next(it);
        if (next != l.end() && *it == *next) {
            it = l.erase(it);
        } else {
            ++it;
        }
    }
}

int main(int argc, char const *argv[])
{
    ifstream arq(argv[1]);
    
    list<string> lista;
    string linha;

    while (getline(arq,linha))
    {
        lista.push_back(linha);
    }
    
    lista.sort();
    unicos(lista);

    for(auto c : lista) cout << c << endl;

    return 0;
}
