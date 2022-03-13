#include <iostream>  //header file
using namespace std; 

int main() 
{ 
	/* a[100] is the array of size 100
	n is the number of elements in an array
	i is the loop element*/
	
	int a[100],n,i;
	
	cout<<"How many elements you want to enter : "; 
	cin>>n; 
	
	cout<<"Enter the elements now : "; 
	for(i=0;i<n;i++) 
		cin>>a[i];
		
	cout<<"The elements you entered are : "; // Traverse each element and displays all the elements of the array
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

    return 0;
}