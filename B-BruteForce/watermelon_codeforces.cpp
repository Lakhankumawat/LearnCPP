#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int w; 
    cout<<"Enter the weight of watermelon"<<" "; 
    cin>>w; //Enter the weight of watermelon
    if(w%2!=0)
    {
        cout<<"The watermelon cannot be divided into two pieces each of even weight";
    }
    else
    {
        if(w!=2)
        {
            cout<<"The watermelon can be divided into two pieces each of weight "<<w/2;
        }
        else
        {
            cout<<"The watermelon cannot be divided into two pieces each of even weight";
        }
    }
    return 0;
}