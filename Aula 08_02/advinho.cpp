
#include <iostream>

using namespace std;
 
int random(int low, int high)
{
    return low + rand() % (high - low + 1);
}
 
int main()
{
    string jogador = "Bora";
    int valor = 0, min = 1, max = 100, tentativas = 0;
 
    while (jogador != "=")
    {
        valor = (min + max)/2;
        cout << valor << endl;
        tentativas++;
        cin  >> jogador;
        if (jogador == ">")
        {
            min = valor;
        }
        else if (jogador == "<")
        {
            max = valor;
        }
        else if (jogador == "=")
        {
            cout << tentativas << " tentativas";
        }
        
    }
 
    return 0;
}