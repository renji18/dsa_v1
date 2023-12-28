// implementing linear search
#include <iostream>
using namespace std;

bool search(int *, int, int);

int main() {
  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
  cout << "Enter the key to search: ";
  int key;
  cin >> key;
  bool found = search(arr, 10, key);
  if (found) {
    cout << "Key found" << endl;
  } else {
    cout << "Key not found" << endl;
  }
  return 0;
}

bool search(int *arr, int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}