#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int conta_palavra(string linha){
    istringstream inp(linha); // trabalha com a string como se fosse um arquivo.
    int np = 0;
    string algo;

    while(inp >> algo){
        np++;
    }

    return np;
}

int main(int argc, char **argv) {
    ifstream arquivo(argv[1]);

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    int linhas = 0;
    int palavras = 0;
    int caracteres = 0;
    string linha;
    
    while (getline(arquivo, linha)) {
        linhas++;
        caracteres += linha.size() + 1;
        palavras += conta_palavra(linha);
    }

    arquivo.close();

    cout << linhas << " " << palavras << " " << caracteres << endl;

    return 0;
}