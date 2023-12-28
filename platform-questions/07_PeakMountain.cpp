// peak mountain
#include <iostream>
using namespace std;

int peakElement(int *, int);

int main() {
  int arr[] = {0, 6, 60, 70, 5, 4, 3, 2};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << peakElement(arr, size);
  return 0;
}

int peakElement(int *arr, int size) {
  int start = 0;
  int end = size - 1;
  while (start < end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;
    }
  }
  return start;
}