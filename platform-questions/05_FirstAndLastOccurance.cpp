// first and last occurance
#include <iostream>
using namespace std;

int firstOcc(int *, int, int);
int secondOcc(int *, int, int);

int main() {
  int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 5};
  int key = 3;
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "First Occurance of " << key << " is " << firstOcc(arr, size, key);
  cout << endl;
  cout << "Second Occurance of " << key << " is " << secondOcc(arr, size, key);
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