#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    if(argc < 3){
        cout << "Uso: " << argv[0] << "arquivo sequencia" << endl;
        return 1;
    }

    ifstream arq(argv[1]);

    if (!arq.is_open())
    {
        perror("ao abrir");
        return errno;
    }
    
    string sequencia = argv[2];
    string linha;

    while (getline(arq, linha))
    {
        int pos = linha.find(sequencia);
        if(pos != string::npos)
        {
            cout << linha << endl;
        }
    }
    return 0;
}
