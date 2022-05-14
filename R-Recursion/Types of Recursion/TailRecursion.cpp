// Code Showing Tail Recursion
#include <iostream>
using namespace std;

// Recursion function
void fun(int n)
{
	if (n > 0) {
		cout << n << " ";

		// Last statement in the function
		fun(n - 1);
	}
}

// Driver Code
int main()
{
    int x;
    cout<<"Enter the value of x";
    cin>>x;
	fun(x);

}
