/*
    Author: Shehab Diab
    Program Name: pivotIndex.cpp
    Program Describtion: This program finds the pivot index in a rotated sorted array
    Last Modification Date: 27/3/2022
*/

#include <iostream>

using namespace std;

int findPivotIndex(int sorted_rotated_array[], int left_index, int right_index);

int main() {
    int sorted_rotated_array[100];

    int array_size;

    cout << "Please Enter Array Size: ";
    cin >> array_size;

    for (int i = 0; i < array_size; i++)
    {
        cout << "\nPlease Enter Array Element of index " << i << ": ";
        cin >> sorted_rotated_array[i];
    }

    int pivot_index = findPivotIndex(sorted_rotated_array, 0, (array_size - 1));
    if (pivot_index == -1)
        cout << "\nThe Given Array Is Not Rotated" << endl;
    else
    {
        cout << "\nPivot index is: " << pivot_index << endl;
        cout << "Pivot Element is: " << sorted_rotated_array[pivot_index] << endl;
    }

}


int findPivotIndex(int sorted_rotated_array[], int left_index, int right_index)
{

    //means that the array is not rotated
    if (right_index < left_index)
        return -1;

    // there is only one element in this condition
    if (right_index == left_index)
        return right_index;

    int mid_index = (left_index + right_index) / 2;

    // if middle element is greater than the element after it
    // then the pivot_index is the mid_index + 1 because it is the only element
    // smaller than the previous one
    if (mid_index < right_index && sorted_rotated_array[mid_index] > sorted_rotated_array[mid_index + 1])
        return mid_index + 1;

    // if middle element is less than the element previous element
    // then the pivot_index is the mid_index because it is the only element
    // smaller than the previous one
    if (mid_index > left_index && sorted_rotated_array[mid_index] < sorted_rotated_array[mid_index - 1])
        return mid_index;

    // search left side of the array
    if (sorted_rotated_array[left_index] >= sorted_rotated_array[mid_index])
    {
        return findPivotIndex(sorted_rotated_array, left_index, mid_index - 1);
    }
    // search the right side of the array
    else
    {
        return findPivotIndex(sorted_rotated_array, mid_index + 1, right_index);
    }
}
