/******************************************************************************
-------------------------------QUICK SORT----------------------------------------
*******************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

//Time complexity best case and average case O(n(logn)) worst case when elements are sorted is O(n^2)
//Space required is constant
int partition(int *arr,int s,int e){
    //In Place Sorting no extra array used
    int i=s-1;
    int j=s;

    int pivot=arr[e];

    for ( ; j <=e-1; )
    {
        //area in the region -1 needs to be exapnded + j starting needs to be swapped
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
        //J needs to be incremented in both cases 
        j+=1;
    }

    swap(arr[i+1],arr[e]);
    return i+1;

}

void quick_sort(int *arr,int s,int e){

    if(s>=e){
        return;
    }
    int p =partition(arr,s,e);
    //left partition
    quick_sort(arr,s,p-1);
    //right partition
    quick_sort(arr,p+1,e);

    //leaving thr pivot element sorted 

}

int main(){
    int arr[]={5,4,3,6,1,2,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    quick_sort(arr,0,s-1);
    
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
