// book allocation problem
// given number of students and an array depicting number of pages in any
// indexed place allocate the books among the students such that max number of
// pages any student has is the minimum of possible allocations allocation is
// contiguous

#include <iostream>
using namespace std;

int bookAllocation(int *, int, int);
int sum(int *, int);

int main() {
  cout << "Enter number of students: ";
  int students;
  cin >> students;
  cout << "Enter number of books: ";
  int books;
  cin >> books;
  int arr[books];
  for (int i = 0; i < books; i++) {
    cout << "Enter pages for book number " << i << ": ";
    cin >> arr[i];
  }
  cout << bookAllocation(arr, students, books) << endl;
  return 0;
}

int bookAllocation(int *arrOfPages, int numOfStudents, int numOfBooks) {

  int totalPages = sum(arrOfPages, numOfBooks);

  int start = 0;
  int end = totalPages;
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    int tempArr[numOfStudents];
    int i = 0;
    for (int j = 0; j < numOfStudents; j++) {
      int tempSum = 0;
      while (i < numOfBooks) {
        tempSum += arrOfPages[i];
        if (tempSum > mid) {
          tempSum -= arrOfPages[i];
          break;
        }
        i++;
      }
      tempArr[j] = tempSum;
    }

    int tempArrSum = sum(tempArr, numOfStudents);
    if (tempArrSum == totalPages) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return ans;
}

int sum(int *arr, int size) {
  int ans = 0;
  for (int i = 0; i < size; i++) {
    ans += arr[i];
  }
  return ans;
}