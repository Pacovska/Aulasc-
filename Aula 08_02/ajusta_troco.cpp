#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream arq(argv[1]);
    float valor;
    int duzentos_reais = 0, cem_reais = 0, cinquenta_reais = 0, vinte_reais = 0, dez_reais = 0, cinco_reais = 0, dois_reais = 0, um_real = 0;
    int cinquenta_cent = 0, vintecinco_cent = 0, dez_cent = 0, cinco_cent = 0, um_cent = 0;

    cout << "informe um valor: ";
    cin  >> valor;
    valor = valor * 100;
    
    while (valor != 0)
    {
        if (valor >= 20000)
        {
            duzentos_reais++;
            valor = valor - 20000;
        }
        else if (valor >= 10000)
        {
            cem_reais++;
            valor = valor - 10000;
        }
        else if (valor >= 5000)
        {
            cinquenta_reais++;
            valor = valor - 5000;
        }
        else if (valor >= 2000)
        {
            vinte_reais++;
            valor = valor - 2000;
        }
        else if (valor >= 1000)
        {
            dez_reais++;
            valor = valor - 1000;
        }
        else if (valor >= 500)
        {
            cinco_reais++;
            valor = valor - 500;
        }
        else if (valor >= 200)
        {
            dois_reais++;
            valor = valor - 200;
        }
        else if (valor >= 100)
        {
            um_real++;
            valor = valor - 100;
        }
        else if (valor >= 50)
        {
            cinquenta_cent++;
            valor = valor - 50;
        }
        else if (valor >= 25)
        {
            vintecinco_cent++;
            valor = valor - 25;
        }
        else if (valor >= 10)
        {
            dez_cent++;
            valor = valor - 10;
        }
        else if (valor >= 5)
        {
            cinco_cent++;
            valor = valor - 5;
        }
        else if (valor >= 1)
        {
            um_cent++;
            valor = valor - 1;
        }
    }
    
    duzentos_reais  > 0 ? (cout << " R$ 200: "  << duzentos_reais)  : (cout << "");
    cem_reais       > 0 ? (cout << " R$ 100: "  << cem_reais)       : (cout << "");
    cinquenta_reais > 0 ? (cout << " R$ 50: "   << cinquenta_reais) : (cout << "");
    vinte_reais     > 0 ? (cout << " R$ 20: "   << vinte_reais)     : (cout << "");
    dez_reais       > 0 ? (cout << " R$ 10: "   << dez_reais)       : (cout << "");
    cinco_reais     > 0 ? (cout << " R$ 5: "    << cinco_reais)     : (cout << "");
    dois_reais      > 0 ? (cout << " R$ 2: "    << dois_reais)      : (cout << "");
    um_real         > 0 ? (cout << " R$ 1: "    << um_real)         : (cout << "");
    cinquenta_cent  > 0 ? (cout << " R$ 0.50: " << cinquenta_cent)  : (cout << "");
    vintecinco_cent > 0 ? (cout << " R$ 0.25: " << vintecinco_cent) : (cout << "");
    dez_cent        > 0 ? (cout << " R$ 0.10: " << dez_cent)        : (cout << "");
    cinco_cent      > 0 ? (cout << " R$ 0.05: " << cinco_cent)      : (cout << "");
    um_cent         > 0 ? (cout << " R$ 0.01: " << um_cent)         : (cout << "");
    return 0;
}
