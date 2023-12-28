// largest row sum

#include <iostream>
using namespace std;

void largestRowSum(int[][3], int, int);

int main() {
  int arr[][3] = {{1, 2, 3}, {11, 22, 33}, {111, 222, 333}, {1111, 2222, 3333}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int columns = sizeof(arr[0]) / sizeof(arr[0][0]);

  largestRowSum(arr, rows, columns);

  return 0;
}

void largestRowSum(int arr[][3], int row, int column) {
  int prevAns = -1;
  int biggestRow = -1;

  for (int i = 0; i < row; i++) {
    int ans = 0;
    for (int j = 0; j < column; j++) {
      ans += arr[i][j];
    }
    if (ans > prevAns) {
      prevAns = ans;
      biggestRow = i;
    }
  }

  cout << "Largest Row is " << biggestRow << " and it's sum is " << prevAns
       << endl;
}