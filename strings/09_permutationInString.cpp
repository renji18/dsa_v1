// str1 = "ab", str2 = "eidbaooo"
// permutation of str1 i.e ba is a substring of str2, so return true;
// lowercase english characters

#include <iostream>
#include <unordered_map>
using namespace std;

bool main() {
  string s1 = "ab";
  string s2 = "eidbaooo";

  unordered_map<char, int> mp;

  for (auto x : s1) {
    mp[x]++;
  }

  int mapCount = mp.size();

  int i = 0;
  int j = 0;

  int k = s1.size();

  while (j < s2.size()) {
    if (mp.find(s2[j]) != mp.end()) {
      mp[s2[j]]--;
      if (mp[s2[j]] == 0)
        mapCount--;
    }
    if (j - i + 1 < k) {
      j++;
    } else if (j - i + 1 == k) {
      if (mapCount == 0)
        return true;
      if(mp.find(s2[i]) != mp.end()){
        mp[s2[i]]++;
      }
    }
  }

  return false;
}
