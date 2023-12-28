// // rotate the array to the right by k steps.

// #include <iostream>
// using namespace std;

// int *rotateArray(int *, int, int);

// void printArr(int *, int);

// int main() {
//   int nums[] = {-1, -100, 3, 99};
//   int k = 2;
//   int size = sizeof(nums) / sizeof(nums[0]);

//   int *ans = rotateArray(nums, size, k);

//   printArr(ans, size);
//   return 0;
// }

// int *rotateArray(int *arr, int size, int key) {
//   if (key < 1)
//     return arr;

//   int tempArr[key - 1];

//   for (int i = size - key; i < size; i++) {
//     tempArr[(key + i) - size] = arr[i];
//   }

//   int *answer = new int[size];

//   int counter = 0;
//   for (int i = 0; i < key; i++) {
//     answer[counter++] = tempArr[i];
//   }

//   for (int i = 0; i < size - key; i++) {
//     answer[counter++] = arr[i];
//   }

//   return answer;
// }

// void printArr(int *arr, int size) {
//   cout << "Printing array" << endl;
//   for (int i = 0; i < size; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> nums = {-1, -100, 3, 99};

  int k = 2;

  int size = nums.size();

  if (size <= 1 || k == 0)
    return 0;

  k = k % size;

  reverse(nums.begin(), nums.end());
  reverse(nums.begin(), nums.begin() + k);
  reverse(nums.begin() + k, nums.end());

  for (auto i : nums) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}