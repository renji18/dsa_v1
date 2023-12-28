// reverse integer
#include <iostream>
using namespace std;

int reverseInteger(int);

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int reverse = reverseInteger(n);
  cout << "Reverse of " << n << " is " << reverse << endl;
  return 0;
}

int reverseInteger(int num) {
  int numRef = num;
  int newNum = 0;
  while (numRef) {
    int rem = numRef % 10;
    newNum = newNum * 10 + rem;
    numRef /= 10;
  }
  return newNum;
}