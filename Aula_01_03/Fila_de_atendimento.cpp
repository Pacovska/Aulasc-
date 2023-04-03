#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string entrada_valor;
    queue<string> atendimento;

    while (true){
        cout << ">";
        getline(cin,entrada_valor);
        if (entrada_valor == "?"){
            if (atendimento.size() != 0)
            {
                cout << atendimento.front() << endl;
                atendimento.pop();
            }            
        }else if (entrada_valor == "sair")
        {
            return false;
        }else if(entrada_valor.size() >= 2){
            atendimento.push(entrada_valor);
            cout << atendimento.size() - 1 << endl;
        }        
    }
    
    return 0;
}
