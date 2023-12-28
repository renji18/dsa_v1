// insertion sort
#include <iostream>
using namespace std;

int *insertionSort(int *, int);

void printArr(int *, int);

int main() {
  int arr[] = {10, 1, 7, 4, 8, 2, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Initial print" << endl;
  printArr(arr, size);

  int *sortedArr = insertionSort(arr, size);

  cout << "Sorted print" << endl;
  printArr(sortedArr, size);

  return 0;
}

int *insertionSort(int *arr, int size) {
  for (int i = 1; i < size; i++) {
    int currElement = arr[i];
    int currIndex = i;
    while (currElement < arr[i - 1] && i > 0) {
      int temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      i--;
    }
    i = currIndex;
  }
  return arr;
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}