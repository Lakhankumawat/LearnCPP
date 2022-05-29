/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<algorithm>
using namespace std;

int Merge(int a[],int low,int mid,int high){

    int i=low,j=mid+1,k=low,temp[10000];
    int inv_count=0;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }else{
            temp[k++]=a[j++];
            inv_count+=mid-i+1;
        }
    }
    while(i<=mid){temp[k++]=a[i++];}
    while(j<=high){temp[k++]=a[j++];}
    
    for (int i = low; i <= high; i++)
    {
        /* code */
        a[i]=temp[i];
    }
    
}



int inversion_count(int a[],int low,int high){
    
    if(low>=high){
        return 0;}
    int mid = (low+high)/2;
    int x=inversion_count(a,low,mid);
    int y=inversion_count(a,mid+1,high);
    int z=Merge(a,low,mid,high); //Cross inversion counts 
    return x+y+z;
}


int main(){
    int arr[]={5,4,3,6,1,2,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout<<s<<endl;
    int result=inversion_count(arr,0,s-1);
    
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total Inversion Counts : "<<result;
    return 0;
}
