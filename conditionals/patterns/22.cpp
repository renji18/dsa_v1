//     1
//    22
//   333
//  4444
#include <iostream>
using namespace std;

int main(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n-i){
      cout<<" ";
      j++;
    }
    while(j<=n){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
  return 0;
}