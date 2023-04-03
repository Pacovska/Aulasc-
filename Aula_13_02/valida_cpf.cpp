#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const **argv)
{
    string cpf =  argv[1], numeros, valor_para_transformar;
    int digito_um = 0, digito_dois = 0, valor;

    for(int i = 0; i < cpf.size(); i++){
        if (isdigit(cpf[i])){
            numeros += cpf[i];
        }
    }

    for (int j = 0; j < 9; j++)
    {
        valor_para_transformar = numeros[j];
        valor = stoi(valor_para_transformar);
        digito_um += (valor * (10 - j)) ;
    }

    for (int k = 0; k < 10; k++)
    {
        valor_para_transformar = numeros[k];
        valor = stoi(valor_para_transformar);
        digito_dois += (valor * (11 - k)) ;
    }
    
    digito_um   = (digito_um * 10) % 11;
    digito_dois = (digito_dois * 10) % 11; 

    if (digito_um == (numeros[9] - '0') && digito_dois == (numeros[10] - '0')){
        cout << cpf << endl;
    }
    else {
        cout << "invalido" << endl;
        return 1;
    }
    
    return 0;
}