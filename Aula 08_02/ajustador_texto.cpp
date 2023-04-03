#include <cstring>
#include <iostream>
#include <fstream>
#include <errno.h>

using namespace std;

int main(int argc, char **argv){
  
  string frase, nova_frase;
  int tamanho, i;

  frase = argv[1];

   for (i = 0; i < frase.size(); i++) {
        if (!isspace(frase[i]) || (!isspace(frase[i - 1]))) {
           nova_frase += frase[i];
        }
    }

  cout << nova_frase;
  return 0;
}