#include <iostream>
#include <vector>
using namespace std;

// method to swap elements
void swapElements(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

// method to print the sorted array
void printSortedArray(vector<int> array)
{
    for (auto element : array)
    {
        cout << element << " ";
    }
}

/*
    Method to sort the array using only 3 variables and single traversal
    Also known as Dutch National Flag Algorithm.
*/
vector<int> sortArray(vector<int> array)
{
    int low = 0;
    int mid = 0;
    int high = array.size() - 1;
    //  Taking 3 ranges:
    //  1 to low will contain only 0s
    //  low to mid will contain only 1s
    //  mid to high will contain ony 2s
    while (mid <= high)
    {
        // case 1: if the mid is pointing to 0, then swap the array values of low and high and
        // increment both low and mid
        if (array[mid] == 0)
        {
            swapElements(&array[low], &array[mid]);
            low++;
            mid++;
        }
        // case 2: if the mid is pointing to 1, then increrment only mid
        else if (array[mid] == 1)
        {
            mid++;
        }
        // case 3: if the mid is pointing to 2, then swap mid and high and then decrease high
        else
        {
            swapElements(&array[mid], &array[high]);
            high--;
        }
    }
    return array;
    // Time Complexity: O(n)
    // Space Complexity: O(1)
}

// main function
int main()
{
    vector<int> array = {0, 1, 1, 0, 2, 0, 1, 1, 2};
    vector<int> sortedArray = sortArray(array);
    cout << "Sorted array is: ";
    printSortedArray(sortedArray);
    return 0;
}
