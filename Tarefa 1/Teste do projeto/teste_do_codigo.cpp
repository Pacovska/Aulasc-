#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Quote {
    int day, month, year;
    double value;
};

// Lê as cotações do arquivo e armazena em um vetor
vector<Quote> read_quotes_from_file(const string& filename) {
    vector<Quote> quotes;
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Erro: não foi possível abrir o arquivo " << filename << endl;
        exit(1);
    }
    while (!file.eof()) {
        Quote q;
        char sep;
        file >> q.day >> sep >> q.month >> sep >> q.year >> q.value;
        if (file.good()) {
            quotes.push_back(q);
        }
    }
    file.close();
    return quotes;
}

// Calcula as quantidades de dias consecutivos com valores ascendentes
vector<int> process_quotes(const vector<Quote>& quotes) {
    stack<int> stack;
    vector<int> ascends(quotes.size(), 0); // quantidades de dias consecutivos com valores ascendentes
    int maxAscends = 0; // maior quantidade de dias consecutivos com valores ascendentes
    
    for (int k = 0; k < quotes.size(); k++) {
        // Encontra o dia anterior mais próximo com preço maior que o do dia atual
        int l = -1;
        while (!stack.empty() && quotes[stack.top()].value <= quotes[k].value) {
            stack.pop();
        }
        if (!stack.empty()) {
            l = stack.top();
        }
        stack.push(k);

        // Calcula a quantidade de dias consecutivos com valores ascendentes
        int asc = k - l;
        ascends[k] = asc;
        maxAscends = max(maxAscends, asc);
    }
    return ascends;
}

// Calcula as probabilidades de cada quantidade de dias consecutivos com valores ascendentes
vector<double> calculate_probabilities(const vector<int>& ascends, int maxAscends) {
    vector<double> probs(maxAscends + 1, 0.0);
    for (int k = 0; k < ascends.size(); k++) {
        probs[ascends[k]] += 1.0;
    }
    for (int k = 0; k <= maxAscends; k++) {
        probs[k] /= ascends.size();
    }
    return probs;
}

// Escreve as quantidades de dias consecutivos com valores ascendentes em um arquivo
void write_ascends_to_file(const vector<Quote>& quotes, const vector<int>& ascends, const string& filename) {
    ofstream outAscends(filename);
    for (int k = 0; k < quotes.size(); k++) {
        outAscends << setfill('0') << setw(2) << quotes[k].day << "/"
                   << setfill('0') << setw(2) << quotes[k].month << "/"
                   << quotes[k].year << " " << ascends[k] << endl;
    }
    outAscends.close();
}

// Escreve as probabilidades de cada quantidade de dias consecutivos com valores ascendentes em outro arquivo
void write_probs_to_file(const vector<double>& probs, const string& filename) {
    ofstream outProbs(filename);
    for (int k = 0; k <= probs.size(); k++) {
        if (probs[k] != 0) {
            outProbs << k << " " << fixed << setprecision(4) << probs[k] << endl;
        }
    }
    outProbs.close();
}

int main(int argc, char* argv[]) {
    // Verifica se o nome do arquivo foi informado
    if (argc != 2) {
        cout << "Erro: informe o nome do arquivo com as cotações como argumento." << endl;
        return 1;
    }

    vector<Quote> quotes = read_quotes_from_file(argv[1]);

    vector<int> ascends = process_quotes(quotes);

    vector<double> probs = calculate_probabilities(ascends, quotes.size());

    for (auto& item : ascends) cout << item << endl;

    write_ascends_to_file(quotes, ascends, "ascends.txt");

    write_probs_to_file(probs, "probs.txt");

    return 0;
}

