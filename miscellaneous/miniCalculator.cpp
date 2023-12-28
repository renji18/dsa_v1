// a, b, ope
#include <iostream>
using namespace std;

int main() {
  cout << "Enter first number: ";
  int num1;
  cin >> num1;
  cout << "Enter second number: ";
  int num2;
  cin >> num2;
  cout << "Enter the operator (+, -, *, /, %): ";
  char ope;
  cin >> ope;
  if (num2 == 0 && ope == '/') {
    cout << "Cannot perform division by 0" << endl;
    return 0;
  }
  switch (ope) {
  case '+':
    cout << num1 + num2;
    break;
  case '-':
    cout << num1 - num2;
    break;
  case '*':
    cout << num1 * num2;
    break;
  case '/':
    cout << num1 / num2;
    break;
  case '%':
    cout << num1 % num2;
    break;

  default:
    cout << "Invalid operator";
    break;
  }
  cout << endl;
  return 0;
}