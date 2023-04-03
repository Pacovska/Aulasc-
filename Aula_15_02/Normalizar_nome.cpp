#include <iostream>
#include <string>
// #include <sstream>
// #include <vector>

using namespace std;

// string normaliza(string nome) {

//     size_t pos = nome.find(" ");
//     if (pos == string::npos) {
//         return "";
//     }

//     vector<string> partes;
//     string parte;
//     istringstream iss(nome);
//     while (iss >> parte) {
//         partes.push_back(parte);
//     }

//     string sobrenome = partes.back();
//     partes.pop_back();
//     string primeiro_nome = partes.front();
//     for (int i = 1; i < partes.size(); i++) {
//         primeiro_nome += " " + partes[i];
//     }

//     return sobrenome + ", " + primeiro_nome;
// }

string normaliza(string nome){

    int pos = nome.rfind(" ");
    string ultimo = nome.substr(pos+1);
    nome = ultimo + "," + nome.substr(0, pos);

    return nome;
}

int main() {
    string nome;
    cout << "Informe um nome: ";
    getline(cin, nome);
    cout << normaliza(nome);
    return 0;
}