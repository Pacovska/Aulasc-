#include <iostream>

using namespace std;

int main(int agrc, char **argv) {
  int excelente = 0, proficiente = 0, suficiente = 0, insuficiente = 0,
      total = 0;
  string nota;

  while (true) {
    nota = argv[1];
    total++;
    if (nota == "E") {
      excelente++;
    } else if (nota == "P") {
      proficiente++;
    } else if (nota == "S") {
      suficiente++;
    } else if (nota == "I") {
      insuficiente++;
    }
    if (total >= 3)
      break;
  }

  if (insuficiente > 0) {
    cout << "I";
  } else if (suficiente > (total / 2)) {
    cout << "S";
  } else if (proficiente > (total / 2) && suficiente < (total / 2)) {
    cout << "P";
  } else if (excelente > (total / 2) && proficiente < (total / 2)) {
    cout << "E";
  }
}