// bubble sort
#include <iostream>
using namespace std;

int *bubbleSort(int *, int);

void printArr(int *, int);

int main() {
  int arr[] = {10, 1, 7, 6, 14, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Initial print" << endl;
  printArr(arr, size);

  int *sortedArr = bubbleSort(arr, size);
  cout << "Sorted print" << endl;
  printArr(sortedArr, size);

  return 0;
}

int *bubbleSort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < size - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped)
      return arr;
  }
  return arr;
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}