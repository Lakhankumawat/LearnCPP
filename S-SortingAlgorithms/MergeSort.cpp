

/*----------------------------------------MERGE SORT---------------------------------------*/
/*-------------------------Time Complexity : O(n)-,-Space : n ---------------------------*/
#include <iostream>
#include<stack>
#include<map>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void Merge(int A[], int low, int mid, int high) // A – input array, low – lower index, high – higher index
{ int i,j,k,t[high-low+1],n=high-low+1;
// t is a temporary array
 // i used for indexing array t;j and k used for indexing on array A
        for(i=0, j = low, k = mid+1; j <= mid && k <= high; ) {
        // if j pointed element in smaller than k pointed element then copy it into array t otherwise copy k pointed element
        if (A[j] <= A[k]) {
                t[i++] = A[j++];
        } else{
            t[i++] = A[k++];
            }
        }
        while(j<=mid) { t[i++] = A[j++];} // Copy the remaining elements in first half of A to t
        while(k<=high) {t[i++] = A[k++];} // Copy the remaining elements in second half of A to t
        //copy the sorted elements into array A into its respective positions
         i=0, j = low; while(i < n)
        { A[j++] = t[i++];
        }

        }


void Merge_sort(int *A,int low,int high){
if(low<high){ //More than one element -base condition
        int mid=(low+high)/2;

        Merge_sort(A,low,mid);
        Merge_sort(A,mid+1,high);
        Merge(A,low,mid,high);

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

Merge_sort(A,0,n-1);

Print(A,n);

return 0;
}
