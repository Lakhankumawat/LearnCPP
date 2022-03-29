// Demo of C++ pointers
// Author: Mohammad El-Ramly
// Date:   29 Mar. 2022
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int val = 5;
	int* ptr1 = &val;
	int* ptr2 = ptr1;
	cout << "val   = " << val  << endl;	// prints 5
	cout << "&val  = " << &val << endl;
	cout << "ptr1  = " << ptr1 << endl; // prints address
	cout << "ptr2  = " << ptr2 << endl; // prints address
	cout << "*ptr1 = " <<*ptr1 << endl;
	cout << "*ptr2 = " <<*ptr2 << endl;
}
