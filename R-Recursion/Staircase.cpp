#include<iostream>
using namespace std;
int stairrec(int steps,int stepsize)
{
    int c = 0;
    if(steps==0)            
        return 1;
   if(steps<0)
        return 0;
    if(stepsize==1)
        c=c+stairrec(steps-1,stepsize);      
    else if(stepsize==2)
    {
         c=c+stairrec(steps-1,stepsize);      
          c=c+stairrec(steps-2,stepsize);
    }
    else if(stepsize==3)
    {
         c=c+stairrec(steps-1,stepsize);       
         c=c+stairrec(steps-2,stepsize);       
         c=c+stairrec(steps-3,stepsize);      
    }
    else if(stepsize==3)
    {
         c=c+stairrec(steps-1,stepsize);       
         c=c+stairrec(steps-2,stepsize);       
         c=c+stairrec(steps-3,stepsize);      
         c=c+stairrec(steps-4,stepsize);      
    }
    return c;
}
int main()
{
    
    int n,j;
    cout<<"Enter number of stairs"<<endl;
    cin>>n;
    cout<<"Input the number of steps the person can take at a time(max 4) : ";
    cin>>j;
    cout<<"No of ways to climb stairs are : ";
    cout<<stairrec(n,j)<<endl;
    return 0;
}