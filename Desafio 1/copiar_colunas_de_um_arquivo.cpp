// #include <iostream>
// #include <sstream>
// #include <string>
// #include <fstream>

// using namespace std;

// // void separa_por_colunas(string linha){

// // }

// int main(int argc, char const **argv)
// {
//     ifstream arq("arquivo_teste.txt");  // abre o arquivo de entrada
//     string line;

//     if (! arq.is_open()){
//         cerr << "Erro ao abrir o arquivo" << endl;
//         return 1;
//     }

//     int contador = -1;

//     if (getline(arq, line)) {  // lê a primeira linha do arquivo
//         stringstream ss(line);
//         string token;

//         while (getline(ss, token, ',')) {  // separa as strings por vírgula
//             cout << token << endl;  // imprime cada string separadamente
//         }
//     }

//     arq.close();  // fecha o arquivo de entrada
//     return 0;
// }


// Incluindo as bibliotecas necessárias
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cerr << "Número insuficiente de argumentos. Use: " << argv[0];
        return 1;
    }

    ifstream arq("arquivo_teste.txt");

    if (!arq.is_open()) {
        cerr << "Não foi possível abrir o arquivo: " << argv[1] << endl;
        return 1;
    }

    string linha;

    while (getline(arq, linha)) { 

        stringstream ss(linha);
        string valor;
        int coluna_atual = 0;

        while (getline(ss, valor, ',')) {
            for (int i = 2; i < argc; i++) { 
                if (coluna_atual == stoi(argv[i])) {
                    cout << valor << ",";
                    break;
                }
            }
            coluna_atual++;
        }
        cout << endl;
    }
    arq.close();
    return 0;
}