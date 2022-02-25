// Implementation of MaxHeap with Insertion and Deletion Function

#include <iostream>

using namespace std;

// To heapify a subtree rooted with node i which is
// an index of arr[] and n is the size of heap
void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(arr[i], arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
	}
}

// Function to delete the root from Heap
void deleteRoot(int arr[], int& n)
{
	// Get the last element
	int lastElement = arr[n - 1];

	// Replace root with last element
	arr[0] = lastElement;

	// Decrease size of heap by 1
	n = n - 1;

	// heapify the root node
	heapify(arr, n, 0);
}
// Function to insert a new node to the Heap
void insertNode(int arr[], int& n)
{
    int key;
    cout << "Enter the key to be inserted:" << endl;
    cin >> key;
    // Increase the size of Heap by 1
    n = n + 1;
 
    // Insert the element at end of Heap
    arr[n - 1] = key;
 
    // Heapify the new node following a
    // Bottom-up approach
    heapify(arr, n, n - 1);
}

/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{
    cout << "Enter the size of the array:" ;
    int n;
    cin >> n;
    cout << "Enter the elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
	
    int t;
    while(t!=4)
    {
        cout << " Press 1 to delete a node.\n Press 2 to insert a node.\n Press 3 to print modified Array.\n Press 4 to exit tge program.\n";
        cin >> t;
        if(t==1) deleteRoot(arr,n);
        else if(t==2) insertNode(arr,n);
        else if(t==3) printArray(arr,n);
        else if(t==4) break;
        else cout << "\nWrong Option chosen" << endl;
    }

	return 0;
}
