
//Read more : https://www.educative.io/edpresso/the-dutch-national-flag-problem-in-cpp

#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,0,0,2,1,2,0,1,1,0,2,0,2};
    int n=sizeof(arr)/sizeof(int);
    
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    //Printing the array
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
