// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int max = i; 
	int l = 2 * i + 1; 
	int r = 2 * i + 2; 

	if (l < n && arr[l] > arr[max])
		max = l;

	if (r < n && arr[r] > arr[max])
	  max = r;

	if (max != i) {
		swap(arr[i], arr[max]);

		heapify(arr, n, max);
	}
}

void heapsort(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i >= 0; i--) {
		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
	int arr[] = { 121, 11, 13, 115, 6, 17 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapsort(arr, n);

	cout << "Sorted array is \n";
	print(arr, n);
}



// output
// Sored Array is : 6 11 13 17 115 121

