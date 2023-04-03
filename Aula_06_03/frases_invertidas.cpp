#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string frase, frase_invertida, resultado;
    stack<string> palavras;

    getline(cin,frase);

    stringstream ss(frase);
    string palavra;
    while (ss >> palavra) {
        palavras.push(palavra);
    }

    while (! palavras.empty()) {
        frase_invertida += palavras.top() + " ";
        palavras.pop();
    }

    //  Remove o ultimo caractere da frase invertida
    frase_invertida.pop_back();

    resultado = (frase == frase_invertida) ? "VERDADEIRO" : "FALSO";
    cout << resultado;

    return 0;
}
