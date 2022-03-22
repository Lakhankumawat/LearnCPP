/*
 * Author: Omar Gaafar
 * Program Name: Maximum of 3 integers
 * Program Description: Find the maximum number of 3 integers
 * Last Modification Date: 23 Mar 2022
 * Version: 1.0
 * Issue No. #683 
*/


#include <iostream>

using namespace std;

int main()
{
	int x, y, z;
	// Asking the User to enter 3 Integer number
	cout << "Please Enter 3 Integer number ";
	cin >> x >> y >> z;

	if (x>y && x>z)
	{
		cout << "The Max. Number is " << x;
	}

	if (y > z && y > x)
	{
		cout << "The Max. Number is " << y;
	}

	if (z > y && z > x)
	{
		cout << "The Max. Number is " << z;
	}
	
	// In case if any Two numbers are equal
	if (z+x==2*z && x> y)
	{
		cout << "The Max Number Is " << z;
	}
	
	if (y + x == 2 * x && x > z)
	{
		cout << "The Max Number Is " << y;
	}
	if (z + y == 2 * z && z > x)
	{
		cout << "The Max Number Is " << z;
	}
	// In Case Three Numbers are Equal
	if (x==y && y==z)
	{
		cout << "No Max Number Found , They are all equal";
	}
}