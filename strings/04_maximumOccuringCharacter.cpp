// find the maximum occuring character

#include <iostream>
#include <map>
using namespace std;

int main() {
  string st = "testsample";
  map<char, int> myMap;

  for (int i = 0; i < st.size(); i++) {
    myMap[st[i]]++;
  }

  char topChar;
  int topCharCount = 0;

  for (auto x : myMap) {
    char firstVal = x.first;
    int secondVal = x.second;
    if (secondVal > topCharCount) {
      topCharCount = secondVal;
      topChar = firstVal;
    } else if (secondVal == topCharCount) {
      if (int(topChar) > int(firstVal)) {
        topChar = firstVal;
      }
    }
  }

  cout << topChar << endl;
  return 0;
}