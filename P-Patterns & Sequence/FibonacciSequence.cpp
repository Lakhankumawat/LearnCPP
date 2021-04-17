


#include <iostream>

using namespace std;
//Fibonacci Series using Recursion



int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}





int main ()
{
	int n = 9;
	cout << fib(n);
	return 0;
}





