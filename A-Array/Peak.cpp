// Finding Peak in 1D Array
// Peak in an array is element which is greater than(or equal to) it's adjacent elements and for corner it is greater than //// it's only adjacent element

// https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/

// Time Complexity to find Peak in array is O(log n)
// Auxilary Space is O(1)


#include<bits/stdc++.h>
using namespace std;

// Function to find peak of the array
int efficientPeak(vector<int> &arr,int n){
    // Base Case
    if(n==1) return 0;
    // Start and End indices of the array.
    int start=0,end=n-1;
    
    // Find mid at each step
    int mid;

    while(end>=start){

        mid=(start+end)/2;

        if(mid == 0){
            // check corner case
            // [8 2 ....]
            // peak is 8
            if(arr[mid] >= arr[mid+1]) break;
            else start=mid+1;
        }

        else if(mid == n-1){
            // check corner case
            // [... 7 16]
            // peak is 16
            if(arr[mid] >= arr[mid-1]) break; 
            else end=mid-1;
        }
        
        // if number at mid is greater than both of it's adjacent numbers
        else if((arr[mid] >= arr[mid-1]) && (arr[mid] >=arr[mid+1])) break;

        // if number of left of mid is greater than number at mid
        // peak will be in left side of mid
        // Eg  [.... 10 9 4 ....] and arr[mid]=9 and arr[mid] <arr[mid-1] (9<10)
        // So peak will be present on the left side
        else if(arr[mid] < arr[mid-1]) end=mid-1;

        // if number of right of mid is greater than number at mid
        else start=mid+1;
    }
    return mid;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Peak of array is at index: ";
    cout<<efficientPeak(arr,n);
    return 0;
}


// Test Case 1
// Input: 
// 5 
// 4 10 3 2 8
// Output:
// Peak of array is at index: 1

// Test Case 2
// Input: 
// 5 
// 1 2 3 4 5
// Output:
// Peak of array is at index: 4






