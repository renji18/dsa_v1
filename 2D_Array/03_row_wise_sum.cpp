// row wise addition

#include <iostream>
using namespace std;

void rowWiseSum(int[][3], int, int);
void columnWiseSum(int[][3], int, int);

int main() {
  int arr[][3] = {{1, 2, 3}, {11, 22, 33}, {111, 222, 333}, {1111, 2222, 3333}};
  int rows = sizeof(arr) / sizeof(arr[0]);
  int columns = sizeof(arr[0]) / sizeof(arr[0][0]);

  cout << "Row Wise Sum " << endl;
  rowWiseSum(arr, rows, columns);
  cout << "Column Wise Sum " << endl;
  columnWiseSum(arr, rows, columns);
  return 0;
}

void rowWiseSum(int arr[][3], int row, int column) {
  for (int i = 0; i < row; i++) {
    int ans = 0;
    for (int j = 0; j < column; j++) {
      ans += arr[i][j];
    }
    cout << "Sum of row " << i << " is " << ans << endl;
  }
}

void columnWiseSum(int arr[][3], int row, int column) {
  for (int i = 0; i < column; i++) {
    int ans = 0;
    for (int j = 0; j < row; j++) {
      ans += arr[j][i];
    }
    cout << "Sum of column " << i << " is " << ans << endl;
  }
}