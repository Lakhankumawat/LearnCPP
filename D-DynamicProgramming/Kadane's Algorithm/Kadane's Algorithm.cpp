
#include <iostream>
using namespace std; 

//Function
void largestSum (int Arr[], int n)
{
    //if we got only one negative no. in an array then largest sum should be no. itself
    //if we got all negatives then sum should be largest element among all
    int max_sum = Arr[0]; 
    int curr_sum = 0;
    for (int i=0;i<n;i++)
    {
        curr_sum = curr_sum + Arr[i];
        if(curr_sum >= max_sum)
        {
                max_sum = curr_sum;
        }
        //if max_sum is negative,ignore that max_sum and start curr_sum again from next element
        if(curr_sum < 0 || curr_sum < max_sum) 
        {
            curr_sum = 0;
        }
    }
    
    cout<<max_sum<<" ";
}

//Main Function
int main ()
{
  int A[] = { 2, 1, -2, 5, 6, -7, 3 };
  int a = sizeof(A)/sizeof(A[0]);
  int B[] = {7,2,3,1,10};
  int b = sizeof(B)/sizeof(B[0]);
  int C[] = {-2};
  int c = sizeof(C)/sizeof(C[0]);
  int D[] = {-9,-4,-3,-7,-2,-10};
  int d = sizeof(D)/sizeof(D[0]);
  
  cout<<"\nLargest Sum of subarray of A :"; // A is array having positive as well as negative integers
  largestSum(A,a); // o/p Largest Sum = 11
  cout<<"\nLargest Sum of subarray of B :"; // B is array having all positive integers
  largestSum(B,b); // o/p Largest Sum = 23
  cout<<"\nLargest Sum of subarray of C :"; // C is array having only one negative integer
  largestSum(C,c); // o/p Largest Sum = -2
  cout<<"\nLargest Sum of subarray of D :"; // D is array having all negative integers
  largestSum(D,d); //o/p Largest Sum = -2
  return 0;
}


