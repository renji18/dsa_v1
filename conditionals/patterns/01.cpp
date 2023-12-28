// ****
// ****
// ****
// ****
#include <iostream>
using namespace std;

// O(n^2)
// int main() {
//   int a;
//   cout << "Enter a number: ";
//   cin >> a;
//   int initialize = 1;
//   while (initialize <= a) {
//     int initialize2 = 1;
//     while (initialize2 <= a) {
//       cout << "*";
//       initialize2++;
//     }
//     initialize++;
//     cout<<endl;
//   }
//   return 0;
// }

// O(n)
int main() {
  int a;
  cout << "Enter a number: ";
  cin >> a;
  int initialize = 1;
  string st = "";
  while (initialize <= a) {
    st += "*";
    initialize++;
  }
  initialize = 1;
  while (initialize <= a) {
    cout << st << endl;
    initialize++;
  }
  return 0;
}