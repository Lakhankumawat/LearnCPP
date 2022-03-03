//Fisher-Yates Algorithm is used to shuffle an array randomly and generate different arrangements of it,such that each arrangement is equally likely to occur.
//Generally,shuffling without this algorithm has a time complexity of O(n^2).
//This algorithm has a time complexity of O(n).

#include<bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

// A utility function to swap to integers
void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A utility function to print an array
void printArray (int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

// A function to generate a random permutation of arr[]
void randomize (int arr[], int n)
{
	//Use a different seed value so that we don't get same result each time this program is run,
	srand (time(NULL));

	// Start from the last element and swap one by one. We don't need to run for the first element that's why i > 0
	for (int i = n - 1; i > 0; i--)
	{
		// Pick a random index from 0 to i
		int j = rand() % (i + 1);

		// Swap arr[i] with the element at random index
		swap(&arr[i], &arr[j]);
	}
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	randomize (arr, n);
	printArray(arr, n);

	return 0;
}

