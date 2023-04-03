#include <list>
#include <iostream>

using namespace std;

// int main() {
//   list<int> q;

//   for (int j=1; j < 6; j++) q.push_back(j);
//   cout << q.front() << endl;
//   cout << q.back() << endl;

//   for (int j=6; j < 11; j++) q.push_front(j);
//   cout << q.front() << endl;
//   cout << q.back() << endl;
// }

// int main() {
//   list<string> q;

//   q.push_back("questão");
//   q.push_back("uma");
//   cout << q.front() << " " << q.back() << endl;

//   q.pop_front();

//   q.push_front("outra");
//   q.push_front("mais");
//   cout << q.front() << " " << q.back() << endl;

//   q.pop_back();

//   cout << q.front() << " " << q.back() << endl;
  
// }

// int main() {
//   list<int> l = {4, 8, 15, 16, 23, 42, 108};
//   int x = 27; 

//   list<int>::iterator it = l.begin();
//   for (; it != l.end(); it++) {
//     if (*it >= x) break;
//     cout << *it << endl;
//   }
// }

void mostra(const list<int> & l) {
  for (auto & x: l) {
    cout << x << endl;
  }
}

int main() {
  list<int> l;

  cout << "Digite números para armazenar na lista" << endl;
  cout << "Quando terminar, tecle somente ENTER" << endl;
  while (true) {
    string n;

    cout << "Número: ";
    getline(cin, n);
    if (n.empty()) break;
    l.push_back(stoi(n));
  }

  l.reverse();
  l.sort();
  cout << endl;
  mostra(l);
}