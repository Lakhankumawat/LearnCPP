#include <iostream>

using namespace std;
int SI(int p,int r,int t);
int main()
{
    int a=100,b=1,c=1;
    int result=SI(a,b,c);
    cout<<"The simple interest is "<<result;
    return 0;
}
int SI(int p,int r,int t)
{
    float SI=(p*r*t)/100;
    return SI;
}
