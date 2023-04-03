#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const **argv)
{
    string palavra1 = "pedro", palavra2 = "poder";
    list<char> lista1, lista2;

    if (palavra1.size() != palavra2.size())
    {
        return 0;
    }

    // list<char> l1(palavra1.begin(), palavra1.end());
    // list<char> l2(palavra2.begin(), palavra2.end());

    for (int i = 0; i < palavra1.size(); i++){
        lista1.push_back(palavra1[i]);
        lista2.push_back(palavra2[i]);
    }

    lista1.sort();
    lista2.sort();

    if(lista1 == lista2){
        cout << "Anagrama";
    }else{
        cout << "Não é uma anagrama";
    }

    return 0;
}
