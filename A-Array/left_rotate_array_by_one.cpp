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
	int temp = Arr[0];
	for (int j =1 ; j<n ; j++) {
		Arr[j-1] = Arr[j];
	}
	Arr[n-1] = temp;
	for (int j=0 ; j< n ; j++) {
		cout<<Arr[j]<<" ";
	}
	return 0;
	
}
//Time Complexity: theta(n) 
//Auxillary space: Theta(1) that is constant
