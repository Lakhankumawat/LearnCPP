 #include <bits/stdc++.h>
using namespace std; 
int Max_num(int n,int m);
int rec_num( int *arr, int n)  
{  
    if (n == 1)  
    {  
        return arr[0];  
        }     
    return Max_num (rec_num (arr, n-1), arr[n-1]);    
}  
// get the maximum number  
int Max_num (int n, int m)  
{  
    if (n > m)  
        return n;  
    return m;  
}  
int main ()  
{    
    cout<<"Enter the size of array";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    int max = rec_num(arr, NUM); // call function  
    cout<<"The maximum number is: "<<max;          // print the largest number  
}  
