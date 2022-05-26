/*
 * Sorting array by breaking it down into a number of smaller subarrays.
 * Not necessary lists of contiguous elements.
 * Instead, shell sort algorithm uses increment gap, to create the array of elements that are “gap” elements apart.
 * 
 * Best Complexity: O(nlog n)
 * Worst Complexity: O(n2)
 * Average Complexity: O(nlog n)
 * Space Complexity: O(1)
 * Stability: No
 */
#include <iostream>
using namespace std;

void shellSort(int arr[], int arraySize) {

	int gap = arraySize / 2;

	while (gap >= 1) {//loop stops when there is no more gap between the indices 

		for (int i = gap; i < arraySize; i++)
		{
			int firstNumber = arr[i];

			int j;
			for (j = i; (j >= gap) && (arr[j - gap] > firstNumber); j -= gap) {
				arr[j] = arr[j - gap];
			}
			arr[j] = firstNumber;
		}

		gap /= 2;
	}
}

/*
 * Take the input array from user
 * Input: size of the array
 * Return: Filled Array
*/

int *takeArrayFromUser(int arraySize) {
	int * arr = new int[arraySize];
	for (int i = 0; i < arraySize; i++) {
		cout << "Enter Element (" << i + 1 << "): ";
		cin >> arr[i];
	}
	return arr;
}

/*
 * Printing the array
 * Input: array to be printed, size of the array
*/
void printArray(int arr[], int arraySize) {
	for (int i = 0; i < arraySize; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{               
	//Test case { 13, 20, 5, 27, 67, 72, 20, 89, 12, 18, 100 }

	int numberOfElements;
	cout << "Please enter the number of elements of the array: ";
	cin >> numberOfElements;
	cout << endl;

	int * arr = takeArrayFromUser(numberOfElements);
	cout << endl << "Array Before Sorting: ";
	printArray(arr, numberOfElements);

	shellSort(arr, numberOfElements);

	cout << endl << "Array After Sorting: ";
	printArray(arr, numberOfElements);
}
