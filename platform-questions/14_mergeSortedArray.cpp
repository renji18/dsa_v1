// merge sorted array

#include <iostream>
using namespace std;

int *mergeSortedArray(int *, int, int *, int, int *);

int main() {
  int arr1[] = {1, 3, 5, 7, 9};
  int arr2[] = {2, 4, 6, 8};

  int sizeof1 = sizeof(arr1) / sizeof(arr1[0]);
  int sizeof2 = sizeof(arr2) / sizeof(arr2[0]);

  int arr3[sizeof1 + sizeof2];

  int *ans = mergeSortedArray(arr1, sizeof1, arr2, sizeof2, arr3);

  for (int i=0; i<sizeof1+sizeof2;i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}

int *mergeSortedArray(int* arr1, int sizeof1, int* arr2, int sizeof2, int* arr3) {
  int i=0, j=0, k=0;

  while(i<sizeof1 && j<sizeof2){
    if(arr1[i] < arr2[j]){
      arr3[k++] = arr1[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }

  while(i<sizeof1){
    arr3[k++]= arr1[i++];
  }

  while(j<sizeof2){
    arr3[k++]= arr2[j++];
  }

  return arr3;
}

// int main() {
//   vector<int> nums1 = {1, 2, 3, 0, 0, 0};
//   int m = 3;
//   vector<int> nums2 = {2, 5, 6};
//   int n = 3;

//   int iterator = m;
//   while (iterator < m + n) {
//     nums1.at(iterator) = nums2[iterator - n];
//     iterator++;
//   }

//   sort(nums1.begin(), nums1.end());

//   for (auto i : nums1) {
//     cout << i << " ";
//   }
//   return 0;
// }