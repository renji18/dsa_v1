// length of strings

#include<iostream>
using namespace std;

int main(){
  string st = "this is a string";

  // cout<<st.length()<<endl;

  int count = 0;

  string :: iterator it =  st.begin();

  for(it; it != st.end(); it++){
    count++;
  }

  cout<<"Length of string is "<<count<<endl;

  // cout<<st<<endl;
  return 0;
}