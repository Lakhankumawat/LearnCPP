// C++ program to show Indirect Recursion
#include <iostream>
using namespace std;

void funB(int n);

void funA(int n)
{
	if (n > 0) {
		cout <<" "<< n;

		// Fun(A) is calling fun(B)
		funB(n - 1);
	}
}

void funB(int n)
{
	if (n > 1) {
		cout <<" "<< n;

		// Fun(B) is calling fun(A)
		funA(n / 2);
	}
}

// Driver code
int main()
{
    int x;
    cout<<"Enter the value of x";
    cin>>x;
	funA(x);
	return 0;
}
