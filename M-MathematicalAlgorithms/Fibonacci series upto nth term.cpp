
#include <iostream>
using namespace std;

void fib(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
fib(n);
    return 0;
}

