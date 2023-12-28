// find all pairs whose sum is equal to a number;
#include <iostream>
using namespace std;

void sumPair(int *, int);

int main() {
  int arr[5] = {2, -3, 3, 3, -2};
  int s = 0;
  sumPair(arr, s);
  return 0;
}

void sumPair(int *arr, int s) {
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (arr[i] + arr[j] == s) {
        if (arr[i] > arr[j]) {
          cout << arr[j] << " " << arr[i] << endl;
        } else {
          cout << arr[i] << " " << arr[j] << endl;
        }
      }
    }
  }
}