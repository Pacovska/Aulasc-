#include <iostream>
#include <list>
#include <string>

using namespace std;

string junta(list<string> & l, const string & delim){
    string frase;

    for(auto i = l.begin(); i != l.back(); ++i){
        frase +=  lista.front();

        if (l.front() != l.back()){
            frase += delim;
        } 
    }

    return frase;
}
