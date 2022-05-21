#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long w;
    cin>>w;
    if(w==0)
    {
        cout<<"The watermelon cannot have 0 weight"<<endl;
    }
    else if((w%2!=0)||(w==2))
    {
        cout<<"No it is not possible"<<endl;
    }
    else
    {
        cout<<"It is possible to divide the watermelon"<<endl;
        cout<<w/2<<" "<<w/2<<endl;
    }
    return 0;
}