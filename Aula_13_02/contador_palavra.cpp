#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  string verifica;
  int i, palavras = 0;
  bool espaco = true;

  cout << ">> ";
  getline(cin, verifica);
  for (i = 0; i < verifica.size(); i++) {
    if (espaco == true && (isalpha(verifica[i + 1]))) {
        palavras++;
        espaco = false;
    }
    if (isspace(verifica[i])){
        espaco = true;
    }
  }

  cout << palavras << " " << i;

  return 0;
}