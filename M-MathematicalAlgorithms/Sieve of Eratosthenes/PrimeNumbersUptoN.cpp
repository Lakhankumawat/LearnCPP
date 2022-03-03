// C++ program to print all the prime numbers in a given range
#include<bits/stdc++.h>
using namespace std;
// a utility function to print all the prime numbers upto n
void primePrint(int n){
	vector<bool> vis(n+1); // a vector list of numbers from 1 to n
	for(int i=2;i*i<=n;i++){
		if(!vis[i]){ // check if the number is a prime number
			for(int j=i*i;j<=n;j+=i)
			vis[j]=1; // marking the multiples of i as non-prime
		}
	}
	for(int i=2;i<=n;i++){
		if(!vis[i])
		cout<<i<<" "; // printing all the unmarked numbers
	}
}
// driver program to test above function 
int main(){
	cout<<"Enter the number: ";
	int n;
	cin>>n;
	cout<<"Prime numbers upto "<<n<<" are: ";
	primePrint(n);
}
