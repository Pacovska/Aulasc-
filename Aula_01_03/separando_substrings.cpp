#include <iostream>
#include <string>
#include <sstream>
#include <queue>

using namespace std;

queue<string> separa(const string &algo, char sep) {
    queue<string> resultado;
    stringstream ss(algo);
    string item;
    while (getline(ss, item, sep)) {
        resultado.push(item);
    }
    return resultado;
}

int main(int argc, char const *argv[]) {
    if (argc != 3) {
        cerr << "Uso: " << argv[0] << " <string> <sep>" << endl;
        return 1;
    }

    string str(argv[1]);
    char sep = argv[2][0];
    
    queue<string> q = separa(str, sep);

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
