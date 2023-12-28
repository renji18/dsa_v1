// reverse array at an index

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {10, 4, 5, 2, 3, 6, 1, 7, 9};
  int reverseAt = 3;
  int start = reverseAt + 1;
  int end = vec.size() - 1;
  while (start <= end) {
    swap(vec[start], vec[end]);
    start++;
    end--;
  }

  for (auto i : vec) {
    cout << i << " ";
  }
  return 0;
}

// int main() {
//   vector<int> vec = {10, 4, 5, 2, 3, 6, 1, 7, 9};
//   int reverseAt = 3;
//   vector<int> ans;
//   int i = 0;
//   while (i <= reverseAt) {
//     ans.push_back(vec[i]);
//     i++;
//   }

//   int j = vec.size() - 1;
//   while (j >= i) {
//     ans.push_back(vec[j]);
//     j--;
//   }

//   // vector<int>::iterator it = ans.begin();
//   // for (it; it != ans.end(); it++) {
//   //   cout << *it << " ";
//   // }
//   for (auto i : ans) {
//     cout << i << " ";
//   }
//   return 0;
// }