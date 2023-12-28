// power function
#include <iostream>
using namespace std;

int power(int, int);

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b; 
  cout << "Power of " << a << " and " << b << " is " << power(a, b) << endl;
  return 0;
}

int power(int a, int b) {
  int ans = 1;
  for (int i = 0; i < b; i++) {
    ans = ans * a;
  }
  return ans;
}