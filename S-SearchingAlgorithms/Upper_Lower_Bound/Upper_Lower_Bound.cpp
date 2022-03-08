#include<bits/stdc++.h>
using namespace std; 

int LowerBound(int arr[], int n, int element)
{
    int start=0, end=n-1;
    int mid;
    while(end-start>1)
    {
        mid=(start+end)/2;
        if(arr[mid]<element)
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    if(arr[start]>=element)
    {
        return start;
    }
    else if(arr[end]>=element)
    {
        return end;
    }
    return -1;
}

int UpperBound(int arr[], int n, int element)
{
    int start=0, end=n-1;
    int mid;
    while(end-start>1)
    {
        mid=(start+end)/2;
        if(arr[mid]<=element)
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    if(arr[start]>element)
    {
        return start;
    }
    else if(arr[end]>element)
    {
        return end;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array in sorted order : ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the element whose upper bound and lower bound you need to search : ";
    cin>>ele;
    cout<<"Upper bound of "<<ele<<" is : "<<UpperBound(arr, n, ele)<<endl;
    cout<<"Lower bound of "<<ele<<" is : "<<LowerBound(arr, n, ele)<<endl;

    return 0;
}   