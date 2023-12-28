// square root
#include <iostream>
using namespace std;

long long int sqrtInteger(int);
double morePrecision(int, int, int);

int main() {
  cout << "Enter a number ";
  int square;
  cin >> square;

  long long int squareRoot = sqrtInteger(square);
  cout << "Square root of " << square << " is " << squareRoot << endl;

  cout << "Enter precision decimal point ";
  int precision;
  cin >> precision;

  cout << "More precise solution of number is "
       << morePrecision(square, precision, squareRoot);

  return 0;
}

long long int sqrtInteger(int square) {

  if (square == 0 || square == 1)
    return square;

  int start = 2;
  int end = square - 1;

  long long int ans = start - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    long long int sqr = mid * mid;
    if (sqr == square) {
      return mid;
    }
    if (sqr < square) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return ans;
}

double morePrecision(int square, int precisionPoint, int squareRootInt) {
  double factor = 1;
  double ans = squareRootInt;

  for (int i = 0; i < precisionPoint; i++) {
    factor = factor / 10;
    for (double j = ans; j * j < square; j += factor) {
      ans = j;
    }
  }
  return ans;
}