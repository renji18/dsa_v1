// move zeros at the end
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &vec);

int main() {

  vector<int> myVec = {2, 0, 1, 3, 0, 0, 0};
  moveZeroes(myVec);
  for (auto x : myVec) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}

void moveZeroes(vector<int> &vec) {
  if(vec.size() <=1) return;
  int start = 0;
  int end = vec.size()-1;
  int pointer = 0;
  while(pointer <= end){
    if(vec[pointer] !=0){
      swap(vec[pointer], vec[start]);
      start++;
    }
    pointer++;
  }
}