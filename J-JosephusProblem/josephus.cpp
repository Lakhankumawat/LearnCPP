// CPP program to find solution of Josephus problem when size of step is 2.

#include <iostream>
using namespace std;

int josephus(int n)
{
    // Find value of 2 ^ (1 + floor(Log n))
    // which is a power of 2 whose value
    // is just above n.
    int p = 1;
    while (p <= n)
        p *= 2;
 
    // Return 2n - 2^(1+floor(Logn)) + 1
    return (2 * n) - p + 1;
}
 

int main()
{
    int n ;
    cout<<"Enter the no. of persons, n (put n>0): ";
    cin>>n;
    cout<<"The chosen place is "<< josephus(n)<<endl;
    return 0;
}