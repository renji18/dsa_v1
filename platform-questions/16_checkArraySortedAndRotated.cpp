// check if array was sorted in non-decreasing order, the array can be rotated
// as well, array may have duplicates.

#include <iostream>
using namespace std;

bool isRotatedAndSorted(int *, int);

bool checkSorted(int *, int, bool);

void printArr(int *, int);

int main() {
  // int nums[] = {1, 2, 3, 4, 5, 6, 7};
  // int nums[] = {5, 6, 7, 1, 2, 3};
  // int nums[] = {5, 6, 7, 1, 2, 3, 9};
  // int nums[] = {2, 1, 3, 4};
  // int nums[] = {3, 4, 5, 1, 2};
  // int nums[] = {3, 4, 5, 1, 2, 3};
  int nums[] = {1, 2, 3};

  int size = sizeof(nums) / sizeof(nums[0]);

  printArr(nums, size);
  if (isRotatedAndSorted(nums, size)) {
    cout << "This array is rotated and sorted";
  } else {
    cout << "This array is not rotated and sorted";
  }

  return 0;
}

bool isRotatedAndSorted(int *arr, int size) {
  int firstIndx = arr[0];
  int lastIndx = arr[size - 1];

  bool answer;

  if (firstIndx < lastIndx) {
    answer = checkSorted(arr, size, false);
  } else {
    answer = checkSorted(arr, size, true);
  }

  return answer;
}

bool checkSorted(int *arr, int size, bool possibleRotation) {
  bool sorted = true;

  int rotatedAt = -1;
  int numOfTimesRotated = 0;

  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      if (possibleRotation) {
        rotatedAt = i;
        numOfTimesRotated++;
        if (numOfTimesRotated > 1) {
          sorted = false;
          break;
        }
      } else {
        sorted = false;
        break;
      }
    }
  }
  return sorted;
}

void printArr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}