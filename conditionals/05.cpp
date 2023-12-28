// prime no
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int checker;
  cin >> checker;
  if(checker ==0 || checker == 1){
    cout<<"Number is neither prime nor composite"<<endl;
    return 0;
  }
  bool flag = false;
  int starter = 2;
  while (starter <= checker / 2) {
    if (checker % starter == 0) {
      flag = true;
      break;
    }
    starter++;
  }
  if (flag) {
    cout << "Number is composite" << endl;
  } else {
    cout << "Number is prime" << endl;
  }
  return 0;
}