// fibonacci
// 01123581321
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int first = 0;
  int second = 1;
  int sum = 0;
  for (int i = 0; i < n + 1; i++) {
    cout<<sum<<" ";
    sum = first + second;
    first = second;
    second = sum;
  }
  return 0;
}