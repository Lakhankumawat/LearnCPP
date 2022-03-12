#include<iostream>
using namespace std;
int main()
{
    //declaration of variables
    int i,n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    //Finding the divisors of the number and adding them to get the sum
    for (i=1; i<n; i++)
    {
        if (n%i==0)
        {
            sum = sum +i;
        }
    }
    // checking if a number is a perfect number or not and printing the output
    if (sum==n)
    {
        cout<<n<<" Is a perfect number";
    }
    else
    {
        cout<<"Not a perfect number";
    }


    return 0;
}
