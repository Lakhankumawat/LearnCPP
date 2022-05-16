#include<iostream> 
using namespace std; 
  
//Function to perform Counting Sort(prerequisite for radix sort) 
void CountingSort(int arr[], int length, int div) 
{ 
    int opt[length]; 
    int calc[10] = {0}; 
  
    for (int i = 0; i < length; i++) 
        calc[ (arr[i]/div)%10 ]++; 
  
    for (int i = 1; i < 10; i++) 
        calc[i] += calc[i - 1]; 
  
    for (int i =length - 1; i >= 0; i--) 
    { 
        opt[calc[ (arr[i]/div)%10 ] - 1] = arr[i]; 
        calc[ (arr[i]/div)%10 ]--; 
    } 
  
    for (int i = 0; i < length; i++) 
        arr[i] = opt[i]; 
} 

// Function to get maximum value in array arr[] 
int getMaximum(int arr[], int length) 
{ 
    int maximum = arr[0]; 
    for (int i = 1; i < length; i++) 
        if (arr[i] > maximum) 
            maximum = arr[i]; 
    return maximum; 
} 
  
//Main implimentation(req function calls)
void RadixSort(int arr[], int length) 
{ 
    int a = getMaximum(arr, length); 
    for (int div = 1; a/div > 0; div *= 10) 
        CountingSort(arr, length, div); 
} 
  

//Driver method
int main() 
{ 
	int length;
	cout<<"Enter the length of the array: "<<endl;
	cin>> length;
	int arr[length];
	cout<<"Enter "<<length<<" integers in any order"<<endl;
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
   cout<<endl<<"Sequence of numbers before Sorting: "<<endl;
   for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	RadixSort(arr, length); 
   
	cout<<endl<<"Sequence of numbers after Sorting: "<<endl;
   for(int i=0;i<length;i++)
	{
		cout<<arr[i]<<" ";
	} 
    
    return 0; 
}
