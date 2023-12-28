// find min and max in array
#include <iostream>
using namespace std;

int min(int *, int);
int max(int *, int);

int main() {
  int arr[5];
  for (int i = 0; i < 5; i++) {
    cout << "Enter value at index " << i << ": ";
    cin >> arr[i];
  }
  cout << "Max value is " << max(arr, 5) << endl;
  cout << "Min value is " << min(arr, 5) << endl;
  return 0;
}

int max(int *arr, int size) {
  int maxi = 0;
  for (int i = 0; i < size; i++) {
    maxi = max(maxi, arr[i]);
    // if (arr[i] > max) {
    //   max = arr[i];
    // }
  }
  return maxi;
}

int min(int *arr, int size) {
  int mini = 0;
  for (int i = 0; i < size; i++) {
    mini = min(mini, arr[i]);
    // if (arr[i] < min) {
    //   min = arr[i];
    // }
  }
  return mini;
}