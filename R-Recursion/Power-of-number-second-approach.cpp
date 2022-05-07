 /*       POWER OF A NUMBER
TIME COMPLEXITY : O(log N)
SPACE COMPLEXITY : O(log N)    Here, N is recursion stack space.  */
#include<iostream>
using namespace std;
int pow(int x,int n){ //function to calculate power of a number
	if(n==0){ //base case 
		return 1;
	}
	else{
		if(n%2==0){ //if n is even, it will square the number x and divide n by half and call the function for the new x and n
			return pow(x*x,n/2);
		}
		else //if n is odd, we will first multiply x so as to make n even and then perform the recursive function again for when power is even
			return x*pow(x*x,n/2);
	}
}
int main(){
	int x,n;
	cout<<"Enter the number"<<endl;
	cin>>x;
	cout<<"Enter the power"<<endl;
	cin>>n;
	
	cout<<x<<" raised to power "<<n<<" is "<<pow(x,n)<<endl;
}
