//Time Compexlity O(logn)
//Space Compexlity O(1)
#include <bits/stdc++.h>
using namespace std;
 
int orderAgnosticBinarySearch(int arr[], int start, int end, int target)
{
 
    // Checking the sorted order of the given array
    bool isAscending = arr[start] < arr[end];
    while (start <= end) {
        int middle = start + (end - start) / 2;
 
        // Check if target is present at mid
        if (arr[middle] == target)
            return middle;
        // Ascending order
        if (isAscending == true) {
            // If target greater, ignore left half of the list
            if (arr[middle] < target)
                start = middle + 1;
            // If target smaller, ignore right half of the list 
            else
                end = middle - 1;
        }
        // Descending order
        else {
            // If target smaller, ignore left half
            if (arr[middle] > target)
                start = middle + 1;
            // If target greater, ignore right half
            else
                end = middle - 1;
        }
    }
    // Element is not present so -1 will be returned
    return -1;
}
 
// Testing the Code with a sample values
int main()
{
    int arr1[] = { 985 , 229 , 68 , 5 ,2};
    int target = 5;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << orderAgnosticBinarySearch(arr1, 0, n - 1, target);
 
    return 0;

}