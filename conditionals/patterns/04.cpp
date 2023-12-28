// 123
// 546
// 789
#include <iostream>
using namespace std;

int main(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  int initial=1;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<initial;
      initial++;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}