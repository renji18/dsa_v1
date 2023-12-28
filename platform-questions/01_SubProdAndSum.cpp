// subtract the product and sum of digits of an integer
#include <iostream>
using namespace std;

int difference(int);

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int diff = difference(n);
  cout << diff;
  return 0;
}

int difference(int number) {
  int ref = number;
  int product = 1;
  int sum = 0;
  while (ref) {
    int remainder = ref % 10;
    product *= remainder;
    sum += remainder;
    ref /= 10;
  }
  return product - sum;
}
