#include <iostream>
using namespace std;

//function to remove duplicate elements
int removeDuplicates(int arr[], int n) {
	// return if the array is empty or contains single elements
	if (n==0  || n==1)
	   return n;
	// declare the temporary variables
	// start travarsing the elements
	int temp[n], j=0;
	for (int i = 0; i<n-1; i++)
	    if (arr[i] != arr[i+1])
	       temp[j++] = arr[i];
	temp[j++] = arr[n-1]; // store the last variable
	for (int i=0; i<j; i++)
	    arr[i] = temp[i];
	return j;
}

int main() {
	int arr[] = {1,2,3,3,4,5,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	// remove the dupicates from the new size of array
	n = removeDuplicates(arr, n);
	// for print the array
	cout<<"The Sorted Array: ";
	for(int i=0; i<n; i++)
	   cout<<arr[i]<< " ";
	return 0;
}
