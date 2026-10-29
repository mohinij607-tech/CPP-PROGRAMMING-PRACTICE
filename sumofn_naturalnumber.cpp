#include<iostream>
using namespace std;
int main(){
  int n,i,sum=0;
  cout<<"Enter the number: ";
  cin>>n;
  for(i=1;i<=n;i++){
    sum = sum+i;
  }
  cout<<"The sum of first "<<n<<"  natural natural numbers is: "<<sum;
  return 0;
}