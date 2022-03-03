// C++ program to find prime factorization of a number using the concept of sieve of eratosthenes
#include<bits/stdc++.h>
using namespace std;
// utility function to print the prime factors of given number n
void primeFactor(int n){
	int spf[n+1];  // array to store smallest prime factor of each number
	for(int i=1;i<=n;i++)
	spf[i]=i;     // initialized the smallest prime factor of each number equal to the number itself
	for(int i=2;i*i<=n;i++){
		if(spf[i]==i){  // check if the number is a prime number 
			for(int j=i*i;j<=n;j+=i){
				if(spf[j]==j) // if the smallest prime factor of this number is not assigned yet
				spf[j]=i;     // assign the smallest prime factor of this number
			}
		}
	}
	while(n>1){
		cout<<spf[n]<<" ";
		n=n/spf[n];  
	}
}
int main(){
	cout<<"Enter the number: ";
	int n;
	cin>>n;
	cout<<"Prime factorization of "<<n<<" is: ";
	primeFactor(n);
}
