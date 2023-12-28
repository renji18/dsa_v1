// linear search

#include <iostream>
using namespace std;

int linearSearch(int[][3], int, int, int);

int main() {
  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  cout << "Enter key to search: ";
  int key;
  cin >> key;

  cout << linearSearch(arr, 3, 3, key) << endl;
  return 0;
}

int linearSearch(int arr[][3], int rows, int columns, int key) {

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (arr[i][j] == key) {
        return 1;
      }
    }
  }
  return 0;
}