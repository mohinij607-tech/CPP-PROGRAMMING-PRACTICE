#include<iostream>
using namespace std;
//ASCII
int main()
{
  for(int row=1;row<=5;row=row+1){
  for(int column=1;column<=5;column=column+1){
      char name = 'a'+(row-1);
  cout<<name<<" ";
}
cout<<endl;
  }
  return 0;
}