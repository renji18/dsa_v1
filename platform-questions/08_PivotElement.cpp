// pivot element, sum on left == sum on right
#include <iostream>
using namespace std;

int pivot(int *, int);

int main() {
  int arr[] = { 8, 10, 17, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << pivot(arr, size);
  return 0;
}

int pivot(int *arr, int size) {

  int s=0;
  int e = size-1;

  while(s<e){
  int mid = s+(e-s)/2;
    if(arr[mid]>=arr[0]){
      s = mid+1;
    } else {
      e = mid;
    }
  }
  return s;
}