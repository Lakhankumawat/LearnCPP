#include <iostream>  // header file
using namespace std;

int main()
{
	/*a[100] is the array of size 100,
	i is the loop,
	item is the element,
	position is defined as where the element should be inserted
	n is the number of elements to be inserted*/
	
	int a[100], i, item, position, n;
	
	cout<<"How many elements do you wnat to enter (less than 100) ? ";
	cin>>n;   // Enter the number of elements in an array a[]
	
	cout<<"Please enter "<<n<<" elements :";    // Enter the elements
	
	for(i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"Enter one more element :";  // Enter the element to be inserted
	cin>>item;
	
	cout<<"Enter the position :";   // Enter the position where element should be inserted
	cin>>position;
	
	for(i=n-1;i>=position-1;i--)
	a[i+1]=a[i];
	
	a[position-1]=item;
	n=n+1;
	
	cout<<"The new array is :";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

    return 0;
}