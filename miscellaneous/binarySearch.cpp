// binary search
#include <iostream>
using namespace std;

int binarySearch(int *, int, int);

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 8;
  int foundAt = binarySearch(arr, size, key);
  if (foundAt >= 0) {
    cout << "Key found at index " << foundAt << endl;
  } else {
    cout << "Key not found" << endl;
  }
  return 0;
}

int binarySearch(int *arr, int size, int key) {
  int high = size - 1;
  int low = 0;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] > key) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}