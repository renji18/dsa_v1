// find all occurances

// we find the first occurance, then the last occurance. In doing so, we have
// the counting of all occurances

#include <iostream>
using namespace std;

int firstOcc(int *, int, int);
int secondOcc(int *, int, int);

int main() {
  int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 3;
  cout << "Total number of occurance of " << key << " is "
       << (secondOcc(arr, size, key) - firstOcc(arr, size, key)) + 1;
  return 0;
}

int firstOcc(int *arr, int size, int key) {
  int start = 0;
  int end = size - 1;
  int ans = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

int secondOcc(int *arr, int size, int key) {
  int start = 0;
  int end = size - 1;
  int ans = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      ans = mid;
      start = mid + 1;
    } else if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}