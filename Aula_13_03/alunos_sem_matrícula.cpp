#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 3) {
        cerr << "Uso: " << argv[0] << endl;
        return 1;
    }

    ifstream matriculas(argv[1]);

    if (!matriculas.is_open()) {
        cerr << "Erro ao abrir o arquivo " << argv[1] << endl;
        return 1;
    }

    ifstream renovacao(argv[2]);

    if (!renovacao.is_open()) {
        cerr << "Erro ao abrir o arquivo " << argv[2] << endl;
        return 1;
    }

    list<string> todos_alunos;
    list<string> renovados;

    // Ler os números de matrícula dos alunos do arquivo de todos os alunos
    string matricula;
    while (matriculas >> matricula) {
        todos_alunos.push_back(matricula);
    }

    matriculas.close();

    // Ler os números de matrícula dos alunos que renovaram matrícula
    while (renovacao >> matricula) {
        renovados.push_back(matricula);
    }

    renovacao.close();

    // Remover os alunos que renovaram matrícula da lista de todos os alunos
    for (string matricula : renovados) {
        todos_alunos.remove(matricula);
    }

    // Exibir os números de matrícula dos alunos que não renovaram matrícula
    for (string matricula : todos_alunos) {
        cout << matricula << endl;
    }

    return 0;
}
