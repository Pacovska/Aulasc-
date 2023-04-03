#include <iostream>
#include <list>
#include <stack>
#include <sstream>

using namespace std;

stack<string> separa(const string & texto){
    stack<string> resultado;
    stringstream ss(texto);
    string item;
    while (getline(ss, item, ' ')) {
        resultado.push(item);
    }
    return resultado;
}

int main(int argc, char const *argv[])
{
    stack<string> pilha = separa("exemplo de texto com separadores");
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }
    return 0;
}

// list<string> separa(const string & texto, const string & sep){
//     list<string> resultado;
//     stringstream ss(algo);
//     string item;
//     while (getline(ss, item, sep)) {
//         resultado.push_back(item);
//     }
//     return resultado;
// }
