#include<bits/stdc++.h>
using namespace std;

//Everytime we are just comparing arr[i] with it's prevoius elements present in the array.

int main(){
    int arr[]={45,67,72,20,89,12};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    //Printing the sorted array.
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

