#include <iostream>

using namespace std;

int main() {
  string atual, nova = "";
  cin >> atual;

  for (int i = 0; i < atual.length(); i++)
    nova = atual[i] + nova;
  cout << nova << endl;
  return 0;
}