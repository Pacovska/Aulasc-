#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool is_valid_date(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12) 
        return false;

    if (dia < 1 || dia > 31) 
        return false;

    if (mes == 2) {
        if (dia > 29) return false;
    }

    if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) 
        return false;

    return true;
}

int main(int argc, char** argv) {
    string data, check_ano;
    ostringstream str_ano;
    char separador;
    int dia, mes, ano;

    stringstream ss(data);
    ss >> dia >> separador >> mes >> separador >> ano;

    str_ano << ano;
    check_ano = str_ano.str();

    if (check_ano.length() != 4 || !is_valid_date(dia, mes, ano)) {
        cout << "data invalida\n";
        return 1;
    }

    cout << data << "\n";
    return 0;
}