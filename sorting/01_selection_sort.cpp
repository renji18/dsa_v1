// selection sort
#include <iostream>
using namespace std;

int *selectionSort(int *, int);

void printArr(int *, int);

int main() {
  int arr[] = {87, 13, 52, 98, 29, 51, 36};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << "Initial print" << endl;
  printArr(arr, size);
  cout << endl;
  int *sortedArr = selectionSort(arr, size);
  cout << "Sorted print" << endl;
  printArr(sortedArr, size);
  return 0;
}

int *selectionSort(int *arr, int size) {
  for (int i = 0; i < size-1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}