 /*       POWER OF A NUMBER
TIME COMPLEXITY : O(N)
SPACE COMPLEXITY : O(N)    Here, N is recursion stack space.  */
#include<iostream>
using namespace std;
int pow(int x,int n){ //function to calculate power of a number
	if(n==0){ //base case
		return 1;
	}
	return x*pow(x,n-1); //recursive call
}
int main(){
	int x,n;
	cout<<"Enter the number"<<endl;
	cin>>x;
	cout<<"Enter the power"<<endl;
	cin>>n;
	
	cout<<x<<" raised to power "<<n<<" is "<<pow(x,n)<<endl;
}
