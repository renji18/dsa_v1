// palindrom is not case sensite, and ignore special characters
// for input 'c1 O$d@eeD o1c' = consider 'c1odeedo1c

#include <iostream>
using namespace std;

int main() {
  string st = "A man, a plan, a canal: Panama";

  string new_st;

  for (int i = 0; i < st.size(); i++) {
    if (tolower(st[i]) >= 97 && tolower(st[i]) <= 122) {
      new_st.push_back(char(tolower(st[i]))); // alpha
    } else if (int(st[i]) >= 48 && int(st[i]) <= 57) {
      new_st.push_back(st[i]); // numeric
    }
  }

  cout<<new_st<<endl;

  bool palindrome = true;
  for (int i = 0; i < new_st.size() / 2; i++) {
    if (new_st[i] != new_st[new_st.size() - 1 - i]) {
      palindrome = false;
      break;
    }
  }

  cout << "Palindrome " << palindrome << endl;

  return 0;
}