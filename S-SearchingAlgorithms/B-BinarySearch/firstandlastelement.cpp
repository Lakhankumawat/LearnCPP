#include<iostream>
using namespace std;


int main()
{
    int n,target;
    cout<<"Enter the size of array elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the target Element"<<endl;
    cin>>target;

    int start= 0;
    int end= n-1;
    int firstindex= -1;
    while(start<=end)
    {
       int mid = start +(end-start)/2;

       if(target<arr[mid])
       {
           end =mid-1;
       }

       else if(target>arr[mid])
       {
           start = mid+1;
       }

       else
       {
         firstindex = mid;
         end =mid-1;
       }
    }


     start= 0;
     end= n-1;
    int lastindex= -1;
    while(start<=end)
    {
       int mid = start +(end-start)/2;

       if(target<arr[mid])
       {
           end =mid-1;
       }

       else if(target>arr[mid])
       {
         start =mid+1;
       }

       else
       {
         lastindex = mid;
         start=mid+1;
       }
    }

    cout<<"The first index of "<<target <<"is: "<<firstindex<<endl;
    cout<<"The last index of "<<target<<"is: "<<lastindex<<endl;


}