// Shell Sort in C++ programming

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

// Driver code
int main() {
	int n,array[10];
	cout<<"Enter the number of elements in the array ";
	cin>>n;
  cout<<"ENTER THE ELEMENTS TO BE SORTED ";
  for(int i=0;i<n;i++){
  	cin>>array[i];
  }
  
  shellSort(array, n);
  cout << "Sorted array: \n";
  printArray(array, n);
}
