// checking for uppercase lowercase and numeric value

#include <iostream>
using namespace std;

int main() {
  cout << "Enter something: ";
  char ch;
  cin >> ch;
  cout<<"Int of ch is "<<int(ch)<<endl;
  if (int(ch) >= 65 && int(ch) <= 90) {
    cout << "The character is uppercase" << endl;
  } else if (int(ch) >= 97 && int(ch) <= 122) {
    cout << "The character is lowercase" << endl;
  } else if (int(ch) >= 48 && int(ch) <= 57) {
    cout << "The character is numeric" << endl;
  }
  return 0;
}