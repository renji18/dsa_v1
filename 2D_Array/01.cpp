// creating 2d array

#include <iostream>
using namespace std;

int main() {
  // int arr[3][3];
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


  // Taking input
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Enter element at [" << i << "] [" << j << "] : ";
      cin >> arr[i][j];
    }
  }

  // Printing output
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}