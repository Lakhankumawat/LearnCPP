#include<iostream>
using namespace std;
int main()
{
	int a, b, c, min, max;
	
	cout << "please enter the three numbers:" << endl;
	cin >> a >> b >> c;

	max = min = a;

	if (b > max)
	
		max = b;

	if (c > max)

		max = c;


	if (b < min)

		min = b;

	if (c < min)

		min = c;

	cout << "the maximum number is : " << max << endl;
	cout << "the minimum number is : " << min << endl;
}