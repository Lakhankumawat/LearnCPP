#include<iostream>
using namespace std;

// https://www.geeksforgeeks.org/merge-sort/

// function to merge two sorted arrays
void merge(int arr[],int l,int mid,int r){
    // size of the first temp array
    int n1=mid-l+1;
    // size of the second temp array
    int n2=r-mid;
    // making temp array because we will be comparing elements and also putting them on right place
    int a[n1];
    int b[n2];

   //entering values from l to mid
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    
    // entering values from mid+1 to r
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0; //for traversing temp a array
    int j=0; //for traversing temp b array
    int k=l; // for traversing main(arr) array whose staring index from l

    // in this while loop smaller value is getting compared and filled in array
    while(i<n1 && j<n2){
           if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
             }
            else{
            arr[k]=b[j];
            k++;
            j++;
            }
    }

    //if j has reached to end but i has not, so ensuring elements after that ith position shoul also added in array
     while(i<n1){
 
            arr[k]=a[i];
            k++;
            i++;
    }
     //if i has reached to end but j has not, so ensuring elements after that jth position shoul also added in array
      while(j<n2){
      arr[k]=b[j];
            k++;
            j++;
    }
    
}

void mergesort(int arr[],int l,int r){

// l and r defines from where to where we wants to sort.
if(l>=r){
   return;
}
        // finding mid 
        int mid=(l+r)/2;
        // sending array to sort from l to mid
        mergesort(arr,l,mid);
        // sending array to sort from mid+1 to r
        mergesort(arr,mid+1,r);
        // after the sorted arrays came, merging the two sorted array ,hence division is done first and then succesfully conqure to sort array
        merge(arr,l,mid,r);
     
}

int main(){

int n;
cout<<"Enter size of array: "<<endl;
cin>>n;
cout<<"Enter elements of array: "<<endl;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// l and r defines from where to where we wants to sort.
int l,r;
cout<<"Enter from which index to which index you wants to sort: "<<endl;
cin>>l>>r;
mergesort(arr,l,r);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
 
}