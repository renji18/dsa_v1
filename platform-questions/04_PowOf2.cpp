// power of 2
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int starting = 1;
  while (starting != n) {
    starting *= 2;
    if (starting > n) {
      cout << n << " is not a power of two" << endl;
      return 0;
    }
  }
  cout << n << " is a power of two" << endl;
  return 0;
}