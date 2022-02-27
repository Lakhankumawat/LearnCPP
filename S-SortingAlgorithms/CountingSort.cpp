/*---COUNTING SORT---
In this sorting technique we count the number of objects having distinct key values.

    Time complexity:  O(n+k) where:
     'n' denotes the number of elements in input array
     'k' is the range of input. 

    Auxiliary Space: O(n+k)
*/

//Program
#include<bits/stdc++.h> //including header file 
using namespace std;

//counting sort function
void countsort(int a[], int n){

    int count[256];
     // initializing all elements with 0
    for(int i=0;i<256;i++){
        count[i]=0;
    }

    //storing count of each character
    for(int i=0;i<n;i++){
        count[a[i]]++; 
    }

    //converting count array to prefixsum count arr
    for(int i=1;i<256;i++){
        count[i]+=count[i-1];
    }

    //creating the output array to store the output
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[count[a[i]]-1] = a[i]; 
        count[a[i]]--;
    }

    //copying the values of output array to the original array
    for(int i=0;i<n;i++){
        a[i]=output[i];
    } 
}

//print function
void print(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

//main function
int main() {
    //taking inputs
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //calling the countsort function
    countsort(a,n); 

    //print the sorted array
    print(a,n);
    return 0;
    
}