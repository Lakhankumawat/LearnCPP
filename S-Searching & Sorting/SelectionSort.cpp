#include<iostream>
using namespace std;

//Find the minimum element in the unsorted array and swap it with element at the begining

int main(){
    int arr[]={34,67,12,89,32,49,88,17,44};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    //Printing the sorted array
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}