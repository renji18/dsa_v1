// wave print => for array  1  2  3  4
//                          4  5  6  7
//                          7  8  9  10
//                          11 12 13 14
//  The output will be => 1, 2, 3, 4, 7, 10, 14, 13, 12, 11, 7, 4, 5, 6, 9, 8

#include <iostream>
using namespace std;

void printSpiral(int[][5], int, int);

int main() {
  int arr[][5] = {{1, 2, 3, 4, 5},
                  {6, 7, 8, 9, 10},
                  {11, 12, 13, 14, 15},
                  {16, 17, 18, 19, 20},
                  {21, 22, 23, 24, 25}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int columns = sizeof(arr[0]) / sizeof(arr[0][0]);

  printSpiral(arr, rows, columns);

  return 0;
}

void printSpiral(int arr[][5], int row, int col) {
  int i = 0;
  int j = 0;
  int runLoop = row * col;

  int maxDown = row;
  int maxUp = 0;
  int maxRight = col;
  int maxLeft = 0;

  bool printRow = true;
  bool printRight = true;
  bool printDown = true;

  while (runLoop) {
    cout << arr[i][j] << " ";
    runLoop--;

    if (printRow) {
      if (printRight) {
        j++;
        if (j == maxRight) {
          j--;
          i++;
          maxRight--;
          printRow = false;
          printRight = false;
        }
      } else {
        j--;
        if (j < maxLeft) {
          j++;
          i--;
          maxLeft++;
          printRow = false;
          printRight = true;
        }
      }
    }

    else {
      if (printDown) {
        i++;
        if (i == maxDown) {
          i--;
          j--;
          maxDown--;
          printRow = true;
          printDown = false;
        }
      } else {
        i--;
        if (i == maxUp) {
          i++;
          j++;
          maxUp++;
          printRow = true;
          printDown = true;
        }
      }
    }
  }
}