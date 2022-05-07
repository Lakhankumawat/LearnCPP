#include<iostream>
#include<algorithm>
using namespace std;
 
// Function to swap two numbers.
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
// This function sorts arr[0..n-1] in wave form
void sortInWave(int arr[], int n)
{
    // Sort the input array
    sort(arr, arr+n);
 
    // Swap adjacent elements
    for (int i=0; i<n-1; i += 2)
        swap(&arr[i], &arr[i+1]);
}
 
// Driver code
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    sortInWave(arr, n);

    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
       
    return 0;
}
