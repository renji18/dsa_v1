// wave print => for array  1  2  3
//                          4  5  6
//                          7  8  9
//  The output will be => 1, 4, 7, 8, 5, 2, 3, 6, 9

#include <iostream>
using namespace std;

void printWave(int[][3], int, int);

int main() {
  int arr[][3] = {{1, 2, 3}, {11, 22, 33}, {111, 222, 333}, {1111, 2222, 3333}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int columns = sizeof(arr[0]) / sizeof(arr[0][0]);

  printWave(arr, rows, columns);
  return 0;
}

void printWave(int arr[][3], int row, int col) {
  int i = 0;
  int j = 0;

  bool oddRow = true;

  while (j < col) {
    cout << arr[i][j] << " ";

    if (oddRow) {
      i++;
      if (i == row) {
        j++;
        i--;
        oddRow = false;
      }
    } else {
      i--;
      if (i < 0) {
        j++;
        i++;
        oddRow = true;
      }
    }
  }
}