 #include <bits/stdc++.h>   //including libraries
using namespace std; 
int Max_num(int n,int m);  //declaring function earlier so that it will not give error.
int rec_num( int *arr, int n)   // declaring function rec_num() with two arguments i.e. arr and n 
{  
 // declaring base condition
    if (n == 1)  
    {  
        return arr[0];  
        }     
 // calling recursively the  rec_num function with decreasing the size of array by 1 and also returning the result after backtracking the function.
    return Max_num (rec_num (arr, n-1), arr[n-1]);    
}  
// function which is declare above for getting  the maximum number  
int Max_num (int n, int m)  
{  
    if (n > m)  
        return n;  
    return m;  
}  
int main ()  
{     //printing for taking input from the user
    cout<<"Enter the size of array";
 //declaring  the size of array
    int n;
 //taking the size of array from the user in form of input
    cin>>n;
 //declaring the array
    int arr[n];
 //printing the result for getting elements of array from the user
    cout<<"Enter the elements of array";
 //taking elements of array from the user in form of for loop
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 //declaring the integer type variable max and calling the rec_num function with array and their size
    int max = rec_num(arr, NUM); // call function 
 
    cout<<"The maximum number is: "<<max;    // print the largest number  
}  
