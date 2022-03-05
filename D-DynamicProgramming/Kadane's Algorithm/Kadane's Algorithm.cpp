
#include <iostream>
using namespace std; 

void largestSum (int Arr[], int n)
{
    int max_sum = Arr[0]; 
    int curr_sum = 0;
    for (int i=0;i<n;i++)
    {
        curr_sum = curr_sum + Arr[i];
        if(curr_sum >= max_sum)
        {
                max_sum = curr_sum;
        }
        if(curr_sum < 0 ) 
        {
            curr_sum = 0;
        }
    }
    cout<<max_sum<<" ";
}

int main ()
{
    int A[100];
    int n;
    cout<<"\nEnter total number of elements :\n";
    cin>>n;
    cout<<"\nEnter array elements :\n";
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
  cout<<"\nLargest Sum of subarray of A is :";
  largestSum(A,n);
  return 0;
}



