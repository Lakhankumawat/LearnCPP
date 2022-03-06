// code needs to be improved
// it should be implemented when a user can input the array of any input size n.

#include<iostream>
using namespace std;

//Repeatedly swap two adjacent elements if they are in wrong order.

int main(){
    int arr[]={9,4,6,2,45,23,90,7};
    int n=sizeof(arr)/sizeof(int);
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }
    //Printing the sorted array.
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}