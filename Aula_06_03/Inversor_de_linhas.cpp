#include <stack>
#include <iostream>
#include <string>
#include <fstream>
#include <errno.h>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream arq("teste.txt");

    if (! arq.is_open()) {
        perror("Ao abrir /etc/hosts");
        return errno;
    }

    stack<string> inverte;
    string linha;

    while (getline(arq, linha))
    {
        inverte.push(linha);
    }
    
    while (! inverte.empty())
    {
        cout << inverte.top() << endl;
        inverte.pop();
    }

    return 0;
}
