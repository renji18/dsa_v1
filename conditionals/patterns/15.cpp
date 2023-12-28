// A
// BC
// DEF
// GHIJ
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int i = 1;
  int count = 0;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << char('A' + count) << " ";
      count++;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}