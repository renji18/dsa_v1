// reverse array
#include <iostream>
using namespace std;

void reverse(int *, int);
void print(int *, int);

int main() {
  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  print(arr, 10);
  reverse(arr, 10);
  cout << "Reversed array";
  print(arr, 10);
  return 0;
}

void reverse(int *arr, int size) {
  // for (int i = 0; i < size / 2; i++) {
  //   int temp = arr[i];
  //   arr[i] = arr[size - 1 - i];
  //   arr[size - 1 - i] = temp;
  // }
  int start = 0;
  int end = size - 1;
  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void print(int *arr, int size) {
  cout << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}