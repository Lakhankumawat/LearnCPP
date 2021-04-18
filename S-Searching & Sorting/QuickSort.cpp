
/*------------------------QUICK SORT------------------------*/
/*Inventor: Tony Hoare
  Worst complexity: n^2
  Average complexity: n*log(n)
  Best complexity: n*log(n)
  Method: Partitioning
  Stable: No
  InPlace : YES
  -----------------------------*/

#include <iostream>
#include<stack>
#include<map>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void swap(int *a,int *b){
 int temp=*a;
 *a=*b;
 *b=temp;
}


int partition(int *A,int low,int high){
int pivot=A[low];
int left=low,right=high;
while(left<right){
while(A[left]<=pivot && left<high){
    left++;
}
while(right>low && A[right]>pivot){
    right--;
}
if(left<right){
    swap(&A[left],&A[right]);
}
}
swap(&A[low],&A[right]);
return right;
}


void Quick_sort(int *A,int low,int high){
if(low<high){ //More than one element -base condition
        int p=partition(A,low,high);

        Quick_sort(A,low,p-1);
        Quick_sort(A,p+1,high);


}
}

void Print(int *A,int n){
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}

int main(){

int n,no;
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}

Quick_sort(A,0,n-1);

Print(A,n);

return 0;
}

