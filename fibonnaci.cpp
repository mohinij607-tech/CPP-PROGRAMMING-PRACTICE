#include<iostream>
using namespace std;
int main(){
  int i,n,a=0,b=-1,c=1;
  cout<<"Enter the number of terms: ";
  cin>>n;
  for(i=0;i<n;i++){
    a=b;
    b=c;
    c=a+b;
    cout<<c<<" ";
  }
  return 0;
}