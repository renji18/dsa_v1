// ["a", "a", "b", "b", "c", "c", "c", "c", "c"] => ["a", "2", "b", "2", "c",
// "5"]

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<char> myVec = {'b', 'b', 'b', 'b', 'b', 'b', 'b',
                        'b', 'b', 'b', 'b', 'b', 'b'};

  if (myVec.size() == 1) {
    return 1;
  }

  string s = "";

  for (int i = 0; i < myVec.size(); i++) {
    char x = myVec[i];
    s += x;
    int count = 1;
    while (i < myVec.size() - 1 && x == myVec[i + 1]) {
      count++;
      i++;
    }
    if (count > 1) {
      s += to_string(count);
    }
  }
  myVec.clear();
  for (int i = 0; i < s.size(); i++) {
    myVec.push_back(s[i]);
  }

  return 0;
}