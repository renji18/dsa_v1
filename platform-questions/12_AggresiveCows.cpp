// Aggressive cows problem

#include <iostream>
using namespace std;

int maximumPossibleMinimumDistance(int *, int, int);
int *sort(int *, int);

int main() {
  cout << "Enter number of cows: ";
  int cows;
  cin >> cows;

  cout << "Enter the number of stalls: ";
  int stallSize;
  cin >> stallSize;

  int stalls[stallSize];

  for (int i = 0; i < stallSize; i++) {
    cout << "Enter value of stall number " << i << ": ";
    cin >> stalls[i];
  }

  cout << "Maximum possible minimum distance is "
       << maximumPossibleMinimumDistance(sort(stalls, stallSize), stallSize,
                                         cows)
       << endl;

  return 0;
}

int maximumPossibleMinimumDistance(int *stalls, int stallSize, int cows) {
  if (stallSize < cows)
    return -1;

  int start = 0;
  int end = stalls[stallSize - 1] - stalls[0];
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    int startStall = 0;
    int placedCows = 1;
    for (int i = startStall + 1; i < stallSize; i++) {
      if (stalls[i] - stalls[startStall] >= mid) {
        placedCows++;
        if (placedCows == cows) {
          ans = mid;
          start = mid + 1;
          break;
        }
        startStall = i;
      }
    }
    if (placedCows < cows) {
      end = mid - 1;
    }
  }

  return ans;
}

int *sort(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}