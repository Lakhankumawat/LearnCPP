// JOSEPHUS PROBLEM (Iterative Solution)
#include <iostream>
using namespace std;

// Function for finding the survived person.
int find(int n, int k)
{
    int sum = 0, i;
  
    // For finding out the survived person 
    // for each i in each iteration
    for (i = 2; i <= n; i++)
        sum = (sum + k) % i;
  
    return sum + 1; //survived person
}
int main()
{
    int n , k;
    cout<<"Enter the no. of persons, n (put n>0): ";
    cin>>n;
    cout<<"Enter k,the person to be killed (k must be >1): ";
    cin>>k;
    cout<<"The survived person is person at position "<<find(n,k)<<endl;
    return 0;
}

