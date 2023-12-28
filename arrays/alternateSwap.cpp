// alternate swap the array
#include <iostream>
using namespace std;

void alternateSwap(int *, int);
void print(int *, int);

int main() {
  int arr[6];
  int size = 6;
  for (int i = 0; i < size; i++) {
    cout << "Enter value at index " << i << ": ";
    cin >> arr[i];
  }
  cout << "Original array is" << endl;
  print(arr, size);
  alternateSwap(arr, size);
  cout << "Alternatively swapped array is" << endl;
  print(arr, size);

  return 0;
}

void alternateSwap(int *arr, int size) {
  for (int i = 0; i < size; i += 2) {
    if (i + 1 == size)
      return;
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
  }
}

void print(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}