#include <iostream>
#include <queue>
#include <string>
#include <fstream>
#include <errno.h>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream arq("texto.txt");

    if (! arq.is_open()) {
        perror("Ao abrir /etc/hosts");
        return errno;
    }

    queue<string> maiusculo, minusculo;
    string palavra;

    while (getline(arq, palavra, " "))
    {
        if (toupper(palavra))
        {
            maiusculo.push(palavra);
        }else{
            minusculo.push(palavra);
        }
    }

    while (true)
    {
        if(!maiusculo.empty()){
            cout << maiusculo.front() << " ";
            maiusculo.pop();
        }else if(!minusculo.empty()){
            cout << minusculo.front() << " ";
            minusculo.pop();
        }else{
            return 0;
        }

    }
    

    return 0;
}
