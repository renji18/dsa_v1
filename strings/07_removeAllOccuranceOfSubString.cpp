// two strings given s, part. remove all occurances of part from s
//  s = "daabcbaabcbc", part = "abc" => "dabaabcbc" => "dababc" => "dab"

#include <iostream>
using namespace std;

void removeString(string &, string);

int main() {
  string st = "axxxxyyyyb";
  string part = "xy";

  removeString(st, part);

  cout<<st<<endl;
  return 0;
}

void removeString(string &st, string part) {
  int found = st.find(part);
  if (found < st.size()) {
    st.erase(found, part.size());
    removeString(st, part);
  }
}