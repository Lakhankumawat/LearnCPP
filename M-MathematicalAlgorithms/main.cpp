#include <iostream>
using namespace std;
int main()
{
   int x,y;
   char u;
   cin>>x>>u>>y;
   if(u=='+')
       cout<<x+y;
   else if(u=='-')
       cout<<x-y;
   else if(u=='*')
       cout<<x*y;
   else if(u=='/')
       cout<<x/y;
}
