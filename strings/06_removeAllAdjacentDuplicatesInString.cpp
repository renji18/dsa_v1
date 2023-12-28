// given string of lowercase letters.
// "abbaca" => remove adjacent "bb" => "aaca" => remove adjacent "aa" => "ca"

#include <iostream>
using namespace std;

int main() {
  string st = "abbaca";

  string ans = "";

  int i = 0;
  while (i < st.length()) {
    if (ans.length() > 0) {
      if(ans[ans.length() -1] == st[i]){
        ans.pop_back();
      } else {
        ans.push_back(st[i]);
      }
    } else {
      ans.push_back(st[i]);
    }
    i++;
  }

  cout << st << endl;
  cout << ans << endl;
  return 0;
}
// int main() {
//   string st = "azxxzy";

//   int i = 0;
//   int j = 1;

//   while (j < st.size()) {
//     if (st[i] == st[j]) {
//       st.erase(i, 2);
//       i = max(0, i - 1);
//       j = max(1, j - 1);
//     } else {
//       i++;
//       j++;
//     }
//   }

//   cout << st << endl;
//   return 0;
// }
