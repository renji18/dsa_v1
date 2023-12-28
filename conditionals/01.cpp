// basic else if, but updation in condition itself

#include <iostream>
using namespace std;

int main() {
  int a = 2;
  int b = a + 1;
  if ((a = 3) == b) {
    cout << a << "if";
  } else {
    cout << a + 1 << "else if";
  }
  return 0;
}