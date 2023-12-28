// search a 2d matrix. Each row is sorted, first integer of each row is greater
// than the last integer of previous row.

#include <iostream>
using namespace std;

int search2dMatrix(int[][4], int, int, int);

int main() {
  int arr[][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {13, 30, 34, 60}};
  int row = sizeof(arr) / sizeof(arr[0]);
  int col = sizeof(arr[0]) / sizeof(arr[0][0]);

  int key = 7;

  search2dMatrix(arr, row, col, key);

  return 0;
}

int search2dMatrix(int arr[][4], int row, int col, int key) {

  int inRowIndex = -1;

  int start = 0;
  int end = row - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid][0] == key)
      return mid;
    
  }

  return 0;
}