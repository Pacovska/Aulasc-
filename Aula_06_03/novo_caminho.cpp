#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

string reduz_caminho(const string &caminho) {
    if (caminho.empty()) {
        return "";
    }
    
    stringstream ss(caminho);
    string item;
    stack<string> pilha;
    
    while (getline(ss, item, '/')) {
        if (item == "..") {
            if (!pilha.empty()) {
                pilha.pop();
            }
        } else if (item != "." && !item.empty()) {
            pilha.push(item);
        }
    }
    
    string caminho_reduzido = "";
    while (!pilha.empty()) {
        caminho_reduzido = "/" + pilha.top() + caminho_reduzido;
        pilha.pop();
    }
    
    return caminho_reduzido.empty() ? "/" : caminho_reduzido;
}