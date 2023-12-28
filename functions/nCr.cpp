// ncr calculation
#include <iostream>
using namespace std;

int factorial(int);
int nCr(int, int);

int main() {
  int n, r;
  cout << "Enter values of n and r: ";
  cin >> n >> r;
  cout << "Value of nCr is " << nCr(n, r) << endl;
  return 0;
}

int factorial(int num) {
  int factor = 1;
  int ref = num;
  while (ref) {
    factor *= ref;
    ref--;
  }
  return factor;
}

int nCr(int n, int r) {
  int num = factorial(n);
  int denom = factorial(r) * factorial(n - r);
  return num / denom;
}