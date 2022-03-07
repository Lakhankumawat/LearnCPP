//Program to left rotate an array by one place
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int Arr[] = {1,2,3,4,5,6};
	int n = 6;
	cout<<"Before rotation: "<<endl;    //Before Rotation of array
	for (int i=0 ; i< n ; i++) {
		cout<<Arr[i]<<" ";
	}
	cout<<endl;
	cout<<"After rotation: "<<endl;   //After Rotation of array
	int temp = Arr[0];         // assigning element at 0 index to a variable temp
	for (int j =1 ; j<n ; j++) {
		Arr[j-1] = Arr[j]; 
		//assigning element of next index to previous index     for ex: Arr[0] = Arr[1] i.e at index 0 the element of index 1 will be stored which is 2.
		//this implies Arr[0] = 2 , Similarly Arr[1] = 3 and so on.
	}
	Arr[n-1] = temp; //  the temp is assigned to index 5. this implies Arr[5] = temp and temp = Arr[0] i.e = 1 . this means Arr[5] = 1
	for (int j=0 ; j< n ; j++) {
		cout<<Arr[j]<<" ";   // hence after rotataing the array will be equal to {2,3,4,5,6,1}
	}
	return 0;
	
}
//Time Complexity: theta(n) 
//Auxillary space: Theta(1) that is constant
