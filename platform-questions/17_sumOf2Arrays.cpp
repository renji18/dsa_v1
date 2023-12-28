// sum of two arrays
// arr1= [3, 4, 5], arr2=[4, 5, 6] => add (345+456) => 801 => output= [8, 0, 1]

#include <cmath>
#include <iostream>
using namespace std;

int *sumOfArrays(int *, int, int *, int, int &);

int numberFromElements(int *, int);

int *createArrayFromNumber(int, int &);

void printArr(int *, int);

int main() {
  int arr1[] = {5, 0, 0};
  int arr2[] = {9, 9, 9};
  int sizeOf1 = sizeof(arr1) / sizeof(arr1[0]);
  int sizeOf2 = sizeof(arr2) / sizeof(arr2[0]);

  int resultSize;
  int *outputArr = sumOfArrays(arr1, sizeOf1, arr2, sizeOf2, resultSize);

  printArr(outputArr, resultSize);
  return 0;
}

int *sumOfArrays(int *arr1, int sizeOf1, int *arr2, int sizeOf2,
                 int &resultSize) {
  int firstNum = numberFromElements(arr1, sizeOf1);
  int secondNum = numberFromElements(arr2, sizeOf2);

  int *finalResult = createArrayFromNumber(firstNum + secondNum, resultSize);

  return finalResult;
}

int numberFromElements(int *arr, int size) {
  int number = 0;
  int powerOf = size - 1;

  for (int i = 0; i < size; i++) {
    number += arr[i] * pow(10, powerOf);
    powerOf--;
  }

  return number;
}

int *createArrayFromNumber(int sum, int &resultSize) {
  int sumRef = sum;
  int size = 0;
  while (sumRef) {
    size++;
    sumRef /= 10;
  }
  resultSize = size;

  int *answerArr = new int[size];
  int sizeRef = size - 1;

  for (int i = 0; i < size; i++) {
    int currentDivisor = pow(10, sizeRef);
    int element = sum / currentDivisor;
    answerArr[i] = element;
    sizeRef--;
    sum %= currentDivisor;
  }

  return answerArr;
}

void printArr(int *arr, int size) {
  cout << "Printing array" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}