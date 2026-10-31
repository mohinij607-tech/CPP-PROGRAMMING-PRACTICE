#include<iostream>
using namespace std;

int main()
{
  for(int row=1;row<=5;row=row+1){
  for(int column=1;column<=5;column=column+1){
  cout<<column*column*column<<" ";
}
cout<<endl;
  }
  return 0;
}