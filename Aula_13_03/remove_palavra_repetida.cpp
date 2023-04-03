#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <sstream>

using namespace std;

int main(int argc, char const **argv)
{
    ifstream arquivo("testando.txt");

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo " << endl;
        return 1;
    }

    vector<string> palavras;
    string linha;

    while (getline(arquivo, linha)) {
        istringstream ss(linha);
        string palavra;

        while (ss >> palavra){
            bool existe = false;
            for(int i = 0; i < palavras.size(); i++){
                if (palavra == palavras[i]){
                    existe = true;
                    break;
                }
            }
            if (!existe){
                palavras.push_back(palavra);
            }
        }
    }

    for(auto i: palavras){
        cout << i << " ";
    }

    return 0;
}
