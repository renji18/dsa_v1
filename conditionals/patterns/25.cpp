//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n - i) {
      cout << " ";
      j++;
    }
    int k = 1;
    while (j <= n) {
      cout << k;
      k++;
      j++;
    }
    k = i;
    while (k > 1) {
      k--;
      cout << k;
    }
    cout << endl;
    i++;
  }
  return 0;
}
