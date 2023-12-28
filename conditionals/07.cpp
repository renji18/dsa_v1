// sum from 1 to n
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  cout << sum;
  return 0;
}