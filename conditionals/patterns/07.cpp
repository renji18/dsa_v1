// 1
// 23
// 456
// 78910
#include <iostream>
using namespace std;

int main(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  int i=1;
  int pointer = 1;
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<pointer;
      j++;
      pointer++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}