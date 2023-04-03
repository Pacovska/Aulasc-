#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
  string atual, nova = "";
  cin >> atual;

  for (int i = 0; i < atual.length(); i++) nova += toupper(atual[i]);
  cout << nova << endl;
  return 0;
}