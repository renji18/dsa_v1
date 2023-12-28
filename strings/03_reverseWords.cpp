// reverse an array of characters which form words
// ["t", "h", "e", " ", "s", "k", "y", " ", "i", "s", " ", "b", "l", "u", "e"]
// reverse the words, which are sepereated by empty space.

#include <iostream>
#include <vector>
using namespace std;

void reverseWords(char *, int);

int main() {
  char st[] = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ',
               'i', 's', ' ', 'b', 'l', 'u', 'e'};

  int size = sizeof(st) / sizeof(st[0]);

  reverseWords(st, size);
  return 0;
}

void reverseWords(char *st, int size) {
  vector<char> ans;

  int back_start = size - 1;
  int back_end = size;

  while (back_start >= 0) {
    if (int(st[back_start]) == 32) {
      for (int i = back_start + 1; i < back_end; i++) {
        ans.push_back(st[i]);
      }
      ans.push_back(' ');
      back_end = back_start;
    }
    back_start--;
  }

  for (int i = 0; i < back_end; i++) {
    ans.push_back(st[i]);
  }

  for (auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
}