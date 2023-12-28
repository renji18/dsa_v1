// for any amount of money, break it into num of 100, 50, 20 and 1 rupee notes

#include <iostream>
using namespace std;

int main() {
  cout << "Enter amount: ";
  int amount;
  cin >> amount;
  cout << amount << " requires " << amount / 100 << " hundred rupee notes "
       << (amount % 100) / 50 << " fifty rupee notes "
       << ((amount % 100) % 50) / 20 << " twenty rupee notes and "
       << ((amount % 100) % 50) % 20 << " one rupee notes" << endl;

  return 0;
}