#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    string bar, term;
    cout << "Barometro:"  << endl;
    getline(cin, bar);
    cout << "Termometro:" << endl;
    getline(cin, term);
    
    if (bar == "subindo"){
        if(term == "subindo")            cout << "Tempo bom, ventos quentes e secos";
        else if (term == "estacionario") cout << "Tempo bom, ventos de leste frescos";
        else if (term == "baixando")     cout << "Tempo bom, ventos de sul a sudeste";
    }
    else if(bar =="estacionario"){
        if(term == "subindo")            cout << "Tempo mudando para bom, ventos de leste";
        else if (term == "estacionario") cout << "Tempo incerto, ventos variaveis";
        else if (term == "baixando")     cout << "Chuva provavel, ventos de sul a sudeste";
    }
    else if (bar =="baixando"){
        if(term == "subindo")            cout << "Tempo instavel, aproximacao de frente";
        else if (term == "estacionario") cout << "Frente quente, com chuvas provaveis";
        else if (term == "baixando")     cout << "Chuvas abundantes e ventos de sul a sudeste fortes";
    }
    return 0;
}
