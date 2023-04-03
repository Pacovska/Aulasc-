#include <iostream>
#include <list>

using namespace std;

void unicos(list<string> & l){
    auto it = l.begin();
    
    while (it != l.end()) {
        auto next = std::next(it);
        if (next != l.end() && *it == *next) {
            it = l.erase(it);
        } else {
            ++it;
        }
    }
}

main(){
    list<string> lista = {"123","123","122","122","122","58794","58794","58794"};

    unicos(lista);

    for(auto i:lista){
        cout << i << " ";
    }
}