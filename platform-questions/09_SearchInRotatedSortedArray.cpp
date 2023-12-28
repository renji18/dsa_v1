// search in rotated sorted array
#include <iostream>
using namespace std;

int findElement(int *, int, int);
int pivot(int *, int);

int main() {
  int arr[] = {12, 15, 18, 2, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int key = 2;
  cout << findElement(arr, size, key);
  return 0;
}

int findElement(int *arr, int size, int key) {
  int start = 0;
  int end = size - 1;

  int pivotPointer = pivot(arr, size);

  if (arr[start] > key) {
    start = pivotPointer;
  }

  if (arr[end] < key) {
    end = pivotPointer - 1;
  }

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == key) {
      return mid;
    }
    if (arr[mid] > key) {
      end = mid - 1;
    }
    if (arr[mid] < key) {
      start = mid + 1;
    }
  }
  return -1;
}

int pivot(int *arr, int size) {

  int s = 0;
  int e = size - 1;

  while (s < e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }
  }
  return s;
}