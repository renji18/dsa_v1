// farenheit to celcius conversion table
#include <iostream>
using namespace std;

int main() {
  int starter = -100;
  int ending = 1000;
  while (starter <= ending) {
    float calculation = (starter - 32) / 1.8;
    cout << starter << " deg F is " << calculation << " deg C" << endl;
    starter++;
  }
  return 0;
}