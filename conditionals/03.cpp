// sum of all even nos. till n
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin >> n;
  int check = 2;
  int sumOfEven = 0;
  while (check <= n) {
    if (check % 2 == 0) {
      cout<<check<<endl;
      sumOfEven += check;
    }
    check++;
  }
  cout << "Sum of first " << n << " even numbers is " << sumOfEven << endl;
  return 0;
}