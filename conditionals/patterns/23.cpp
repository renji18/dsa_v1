// 1234
//  234
//   34
//    4
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = i;
    int k = 1;
    while (k <= i) {
      cout << " ";
      k++;
    }
    while (j <= n) {
      cout << j;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}