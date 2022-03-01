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


// first method to sort the array using count method
vector<int> sortArray1(vector<int> array)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (auto element : array)
    {
        if (element == 0)
        {
            count0++;
        }
        else if (element == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int iterator = 0;
    while (count0 > 0)
    {
        array[iterator++] = 0;
        count0--;
    }
    while (count1 > 0)
    {
        array[iterator++] = 1;
        count1--;
    }
    while (count2 > 0)
    {
        array[iterator++] = 2;
        count2--;
    }
    return array;
    // Time Complexity: O(n) -> Parsing through each element of the array
    // Space Coplexity: O(1) -> No extra space used.
}


// second method to sort the array using only 3 variables and single traversal
vector<int> sortArray2(vector<int> array)
{
    int low = 0;
    int mid = 0;
    int high = array.size() - 1;
    while (mid <= high)
    {
        if (array[mid] == 0)
        {
            swapElements(&array[low], &array[mid]);
            low++;
            mid++;
        }
        else if (array[mid] == 1)
        {
            mid++;
        }
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

int main()
{
    vector<int> array = {0, 1, 1, 0, 2, 0, 1, 1, 2};
    vector<int> sortedArray1 = sortArray1(array);
    vector<int> sortedArray2 = sortArray2(array);
    cout << "Sorted array with first method: ";
    printSortedArray(sortedArray1);
    cout << "\nSorted array with second method: ";
    printSortedArray(sortedArray2);
    return 0;
}