#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	int numbers[MAX];
	int number, i, j;
	int temp;

	
	cout << "Enter total number of elements to arrange: ";
	cin >> number;

	for (i = 0; i < number; i++)
	{
		cout << "Enter element";
		cin >> numbers[i];
	}

	//sorting - ASCENDING ORDER
	for (i = 0; i < number; i++)
	{
		for (j = i + 1; j < number; j++)
		{
			if (numbers[i] > numbers[j])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}

	//print sorted array elements
	cout << "Sorted elements:" << endl;
	for (i = 0; i < number; i++)
		cout << numbers[i];
	cout << endl;


	return 0;

}