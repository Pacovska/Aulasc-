#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream arq(argv[1]);
    
    list<string> lista;
    string linha;

    while(getline(arq,linha)){
        lista.push_back(linha);
    }

    lista.sort();

    for(auto c : lista) cout << c << endl;


    return 0;
}
