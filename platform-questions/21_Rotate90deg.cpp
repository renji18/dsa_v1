// wave print => for array  1  2  3  4        11  7  4  1
//                          4  5  6  7    =>  12  8  5  2
//                          7  8  9  10       13  9  6  3
//                          11 12 13 14       14  10 7  4

// Should be an n*n array

#include <iostream>
using namespace std;

void rotate90(int[][5], int);
void printArray(int[][5], int);

int main() {
  int arr[][5] = {{1, 2, 3, 4, 5},
                  {6, 7, 8, 9, 10},
                  {11, 12, 13, 14, 15},
                  {16, 17, 18, 19, 20},
                  {21, 22, 23, 24, 25}};
  int size = sizeof(arr) / sizeof(arr[0]);

  rotate90(arr, size);
  return 0;
}

void rotate90(int arr[][5], int size) {

  cout << "Before Rotating" << endl;
  printArray(arr, size);

  for (int layer = 0; layer < size / 2; layer++) {
    int first = layer;
    int last = size - layer - 1;

    for (int i = first; i < last; i++) {
      int offset = i - first;
      int top = arr[first][i];

      // right to top
      arr[first][i] = arr[last - offset][first];

      // bottom to right
      arr[last - offset][first] = arr[last][last - offset];

      // left to bottom
      arr[last][last - offset] = arr[i][last];

      // top to left
      arr[i][last] = top;
    }
  }

  cout << "After Rotating" << endl;
  printArray(arr, size);
}

void printArray(int arr[][5], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}