
// CPP program to illustrate
// Function Overloading
#include <iostream>
using namespace std;

// overloaded functions
void test(int);
void test(float);
void test(int, float);

int main()
{
	int a = 5;
	float b = 5.5;

	// Overloaded functions
	// with different type and
	// number of parameters
	test(a);
	test(b);
	test(a, b);

	return 0;
}

// Method 1
void test(int var)
{
	cout << "Integer number: " << var << endl;
}

// Method 2
void test(float var)
{
	cout << "Float number: "<< var << endl;
}

// Method 3
void test(int var1, float var2)
{
	cout << "Integer number: " << var1;
	cout << " and float number:" << var2;
}


/*
------------ OUTPUT ------------
Integer number: 5
Float number: 5.5
Integer number: 5 and float number: 5.5
--------------------------------
*/
