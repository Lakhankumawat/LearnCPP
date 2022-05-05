//Header Files
#include <bits/stdc++.h>
using namespace std;

// Finding missing and repeating element
void printTwoElements(int arr[], int size)
{
	int i;
	// Repeating element
	printf("\n The repeating element is");

	for (i = 0; i < size; i++) {
		if (arr[abs(arr[i]) - 1] > 0)
			arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
		else
			printf(" %d ", abs(arr[i]));
	}
	// Missing element
	printf("\nand the missing element is ");
	for (i = 0; i < size; i++) {
		if (arr[i] > 0)
			printf("%d", i + 1);
	}
}

// Driver code
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
		printTwoElements(arr, n);
	return 0;
}
