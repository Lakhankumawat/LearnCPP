// Shell Sort in C++ programming
// Using Shell's original sequence as intervals in the algorithm

#include <iostream>
using namespace std;

// Shell sort
void shellSort(int array[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {
    for (int i = interval; i < n; i += 1) {
      int temp = array[i];
      int j;
      for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
        array[j] = array[j - interval];
      }
      array[j] = temp;
    }
  }
}

// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Input elements into array
void inputArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
   {
    cout << "Enter element " << i << ": ";
    cin >> array[i];
   }
}

// Driver code
int main() {
  int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int size = sizeof(data) / sizeof(data[0]);
  cout << "For Sample Array: " << endl << "..................... " << endl;
  cout << "Unsorted Array: \n";
  printArray(data, size);
  shellSort(data, size);
  cout << "Sorted array: \n";
  printArray(data, size);
  int n;
  cout << "For User Input Array: " << endl << "..................... " << endl;
  cout << "Enter array size: \n ";
  cin >> n;
  int Arr[n];
  inputArray(Arr, n);
  cout << "Unsorted Array: \n";
  printArray(Arr, n);
  shellSort(Arr, n);
  cout << "Sorted array: \n";
  printArray(Arr, n);
  
}

/* Sample Output

For Sample Array:
.....................
Unsorted Array:
9 8 3 7 5 6 4 1
Sorted array:
1 3 4 5 6 7 8 9
For User Input Array:
.....................
Enter array size:
 7
Enter element 0: 12
Enter element 1: 56
Enter element 2: 98
Enter element 3: 22
Enter element 4: 5
Enter element 5: 3
Enter element 6: 10
Unsorted Array:
12 56 98 22 5 3 10
Sorted array:
3 5 10 12 22 56 98

*/
