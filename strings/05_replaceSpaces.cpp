// replace space in a string with @40

#include <iostream>
using namespace std;

int main() {
  string st = "In test case 2, After replacing the spaces with “@40” string is: ";

  int size = st.size();

  for (int i = 0; i < size; i++) {
    if (int(st[i]) == 32) {
      st.replace(i, 1, "@40");
    }
  }

  cout << st << endl;

  return 0;
}