#include <iostream>

using namespace std;

int main()
{
	int length;

	cout << "Please, Enter the length: ";

	cin >> length;

	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length; ++j)
		{
			cout << '*';
		}

		cout << '\n';
	}	
}
