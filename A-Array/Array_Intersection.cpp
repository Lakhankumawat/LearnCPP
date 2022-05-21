#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    long long p1=0,p2=0;
    if(n>=m)
    {
       for(long long i=0;i<m;i++)
       {
           while(a[p1]<b[p2]&&p1<n)
           {
               p1++;
           }
           if(p1<n)
           {
               if(a[p1]==b[p2])
               {
                   cout<<b[p2]<<" ";
               }
           }
           else{
               break;
           }
           p2++;
       }
    }
    else
    {
       for(long long i=0;i<n;i++)
       {
           while(b[p2]<a[p1]&&p2<m)
           {
               p2++;
           }
           if(p2<m)
           {
               if(a[p1]==b[p2])
               {
                   cout<<a[p1]<<" ";
               }
           }
           else{
               break;
           }
           p1++;
       }
    }
    cout<<endl;
    return 0;
}