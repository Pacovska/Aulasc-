#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        cerr << "Uso: " << argv[0] << " nome_do_arquivo" << endl;
        return 1;
    }

    ifstream arquivo(argv[1]);

    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo" << endl;
        return 1;
    }

    vector<double> dados;

    // Ler os dados do arquivo
    double dado;
    while (arquivo >> dado) {
        dados.push_back(dado);
    }

    arquivo.close();

    if (dados.empty()) {
        cout << "Não há dados no arquivo" << endl;
        return 0;
    }

    bool houve_outlier = true;

    while (houve_outlier) {
        // Calcular a média
        double soma = 0.0;
        for (double dado : dados) {
            soma += dado;
        }
        double media = soma / dados.size();

        houve_outlier = false;

        // Remover outliers
        vector<double> novos_dados;
        for (double dado : dados) {
            double desvio = abs(dado - media) / media;
            if (desvio <= 0.2) {
                novos_dados.push_back(dado);
            } else {
                houve_outlier = true;
            }
        }

        dados = novos_dados;
    }

    // Exibir os dados resultantes
    for (double dado : dados) {
        cout << dado << " ";
    }
    cout << endl;

    return 0;
}
