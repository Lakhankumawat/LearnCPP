// C++ program showing Head Recursion

#include <bits/stdc++.h>
using namespace std;

// Recursive function
void fun(int n)
{
	if (n > 0) {

		// First statement in the function
		fun(n - 1);

		cout << " "<< n;
	}
}

// Driver code
int main()
{
	int x;
    cout<<"Enter thevalue of x";
    cin>>x;
	fun(x);
	return 0;
}
