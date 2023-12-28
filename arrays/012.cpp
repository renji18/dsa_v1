// sort 0, 1, 2
#include <iostream>
using namespace std;

// int main() {
int main() {
  int arr[] = {0, 1, 1, 2, 0, 2, 1, 0, 0, 2, 2, 1, 1, 0, 1, 2, 2, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  int start = 0;
  int mid = 0;
  int end = size - 1;
  while (mid <= end) {
    if (arr[mid] == 0) {
      swap(arr[start], arr[mid]);
      start++;
      mid++;
    } else if (arr[mid] == 1) {
      mid++;
    } else if (arr[mid] == 2) {
      swap(arr[mid], arr[end]);
      end--;
    }
  }
  for (int num : arr) {
    cout << num << " ";
  }
  return 0;
}