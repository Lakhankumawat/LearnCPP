#include <iostream>
using namespace std;
int main()
{
    int x,sum=0;
    cout<<"pls, enter a number : ";
    cin>>x;
    for(int i=1;i<x;i++)
    {
        if(x%i==0){
            sum+=i;
        }
    }
    if(sum==x){
        cout<<x<<" "<<"is perfect number";
    }
    else{
        cout<<x<<" "<<"is not perfect number";
    }
    return 0;
}
