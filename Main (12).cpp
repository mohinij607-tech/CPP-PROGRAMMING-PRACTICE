#include <iostream>
using namespace std;
//square
int main() 
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int count=1;count<=n;count=count+1){
        cout<<count<<" Square is:"<<count*count<<endl;
    }

  


    return 0;
}