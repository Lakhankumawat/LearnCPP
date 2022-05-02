// Search element in rotated sorted array

// Problem Statement: https://leetcode.com/problems/search-in-rotated-sorted-array/

#include<bits/stdc++.h>
using namespace std;

int SearchElement(int arr[],int n,int element){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==element){  // Element found
            return mid;
        }
        if(arr[low]<=arr[mid]){  // left half sorted
            if(element>=arr[low] && element<arr[mid]){  
                high=mid-1;       // go in left sorted half
            }
            else{
                low=mid+1;       //  go in unsorted right half
            }
        }
        else{         // right half sorted
            if(element>arr[mid] && element<=arr[high]){
                low=mid+1;       //  go in right sorted half
            }
            else{
                high=mid-1;      //  go in left unsorted half
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int element;
    cin>>element;
    cout<<SearchElement(arr,n,element);
    return 0;
}
