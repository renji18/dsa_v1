// 10's complement

// #include <iostream>
// using namespace std;

// int main() {
//   cout << "Enter a number: ";
//   int n;
//   cin >> n;
//   if (n == 0) {
//     cout << 1 << endl;
//     return 0;
//   }
//   int mask = n;
//   int counter = 0;
//   while (mask != 0) {
//     mask = mask >> 1;
//     counter++;
//   }
//   while (counter) {
//     mask = mask << 1;
//     mask = mask | 1;
//     counter--;
//   }
//   cout << (~n & mask) << endl;
//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int m = n;
  int mask = 0;
  while (m != 0) {
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  return (~n & mask);
}