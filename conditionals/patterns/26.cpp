// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    int k = 1;
    while (j <= n - i + 1) {
      cout << k;
      j++;
      k++;
    }
    while (j <= n) {
      cout << "**";
      j++;
    }
    while (k > 1) {
      k--;
      cout << k;
    }
    cout << endl;
    i++;
  }
  return 0;
}