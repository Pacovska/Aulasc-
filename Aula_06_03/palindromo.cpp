#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
    string entrada, saida, result;
    stack<char> palindromo;

    cout << ">";
    cin >> entrada;

    for(int i = 0; i < entrada.size(); i++)
    {
        palindromo.push(entrada[i]);
    }

    while (! palindromo.empty())
    {
        saida += palindromo.top();
        palindromo.pop();
    }

    cout << entrada << endl;
    cout << saida << endl;

    result = (entrada == saida) ? "VERDADEIRO" : "FALSO";
    cout << result;

    if(entrada == saida)
    {
        cout << "VERDADEIRO" << endl;
    }else{
        cout << "FALSO" << endl;
    }
    

    return 0;
}
