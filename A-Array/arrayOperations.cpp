//                                                           LearnCPP
//                                                      ARRAY OPERATIONS #1063

//################################################## VARIOUS OPERATIONS IN AN ARRAY ############################################################################

// 1. TRAVERSAL
// 2. INSERTION
// 3. DELETION
// 4. SEARCHING

//******************************************************  START OF THE PROGRAM  ********************************************************************************

// Header Files Used
#include <iostream>
#include <conio.h>

using namespace std;

// Function Declaration
void traversal(int, int);
int insert(int, int, int, int, int);
void deletion(int, int, int);
int linearSearch(int, int, int);
int binarySearch(int, int, int);

//-------------------------------------------- TRAVERSAL of ARRAY ----------------------------------------------------------------------

void traversal(int arr[], int size)
{
    cout << "The elements in the array are: " << endl;
    // FOR Loop to traverse every element of the array
    for (int i = 0; i < size; i++)
    {
        cout << "  " << arr[i]; // Printing the traversed elements
    }
    cout << "\n";
}

//--------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------- INSERTION in ARRAY ------------------------------------------------------------------------

/*                                             TIME COMPLEXITY
BEST CASE TIME COMPLEXITY FOR INSERTION IS O(1) as the element to be inserted is at last index. So the element is directly inserted
WORST CASE TIME COMPLEXITY FOR INSERTION IS O(n) as the element to be inserted is at first index. So firstly all the elements are shifted then new element is inserted
*/
int insert(int arr[], int element, int index, int size, int capacity)
{
    // Check whether array is Full or Empty
    if (size >= capacity)
    {
        return -1; // -1 Indicates unsuccessfull insertion
    }

    else
    {
        // For loop to move elements forward so that new element can be inserted
        for (int i = size - 1; i >= index; i--)
        {
            // Shift the elements for insertion
            arr[i + 1] = arr[i];
        }
        arr[index] = element; // Put the element at required index
        cout << "After Insertion: " << endl;
        return 1;
    }
}
//--------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------- DELETION in ARRAY ------------------------------------------------------------------------

/*                                             TIME COMPLEXITY
BEST CASE TIME COMPLEXITY FOR DELETION is O(1) as the element to be deleted is at last index. So the element is deleted directly
WORST CASE TIME COMPLEXITY FOR DELETION is O(n) as the element to be deleted is at first index. So firstly all the elements are shifted then element is deleted
*/

void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1]; // Shift the element for deletion so that the value of element at that index acquire the value of next index
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------- LINEAR SEARCHING IN AN ARRAY -------------------------------------------------------------

/*                                            TIME COMPLEXITY
BEST CASE TIME COMPLEXITY FOR LINEAR SEARCH is O(1) as the element is found at first comparison only
WORST CASE TIME COMPLEXITY FOR LINEAR SEARCH is O(n) as every element is compared & element is found at last
*/

int linearSearch(int arr[], int key, int size)
{
    // FOR loop to search every element of the array
    for (int i = 0; i < size; i++)
    {
        // If searched element is found then return the index of that element
        if (arr[i] == key)
        {
            cout << "The element " << key << " is found at index " << i << endl;
            return i;
        }
    }

    cout << "Element Not Found!!" << endl;
}

//---------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------- BINARY SEARCHING IN AN ARRAY --------------------------------------------------------------

/*                                             TIME COMPLEXITY
BEST CASE TIME COMPLEXITY FOR INSERTION is O(1) as only one comparison is needed
WORST CASE TIME COMPLEXITY FOR INSERTION is O(log n)
*/

//***NOTE** BINARY SEARCH WORKS FOR ONLY SORTED ARRAY
int binarySearch(int arr[], int key, int size)
{
    // Example:    1   2   3   4   5
    //            low     mid     high

    // mid= 0 + 4 / 2 = 2 i.e element at middle is at index 2
    int low = 0;
    int mid;
    int high = size - 1;
    // WHILE loop to check that array is not empty i.e low should not be greater than high
    while (low <= high)
    {
        mid = (low + high) / 2;
        // If element is found at certain index return value of mid
        if (arr[mid] == key)
        {
            cout << "The element " << key << " is found at index " << mid << endl;
            return mid;
        }
        // If element is bigger than middle element then check from middle to high
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        // If element is smaller than middle element then check from low to middle
        else
        {
            high = mid - 1;
        }
    }
    cout << "Element Not Found!!" << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------- MAIN FUNCTION ----------------------------------------------------------------------------
int main()
{
    int capacity = 10;
    int arr[capacity]; // Array which can store 10 elements in it

    int size; // Size represents the number of elements present in the array
    cout << "Enter size of array: ";
    cin >> size; // Input the size of array from User

    // CHECK whether array size is more or less than capacity
    if (size <= capacity)
    {
        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        // Code for inputting elements of array from the User
        cout << "Enter elements of array: " << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ TRAVERSAL CALL ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        // Calling TRAVERSAL function

        cout << "\nTRAVERSAL FUNCTION OUTPUT: " << endl;
        traversal(arr, size);
        cout << "---------------------------------" << endl;

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ INSERTION CALL ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        int index;
        cout << "\nINSERTION FUNCTION OUTPUT: " << endl;
        // Input the index at which user wants to insert new element
        cout << "Enter the index no. at which you want to insert new element: " << endl;
        cin >> index;

        // CHECK whether index exists or not in the array
        if (index <= size && index >= 0)
        {
            insert(arr, 10, index, size, capacity); // Calling insert function
            if (size < capacity)
            {
                size += 1; // Increasing the size of array so that new element can be inserted
            }
            else
            {
                cout << "Cannot Be Inserted as array is Full!!" << endl;
            }
            traversal(arr, size);
            cout << "Element is inserted Successfully" << endl;
        }
        else
        {
            cout << "Cannot be inserted at this index" << endl;
        }
        cout << "---------------------------------" << endl;

        // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  Deletion Call  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        // Input user the index at which the user want to delete element
        cout << "\nDELETION FUNCTION OUTPUT: " << endl;
        cout << "Enter the index no. at which you want to delete element: " << endl;
        cin >> index;

        // CHECK whether the index is valid or not
        if (index <= size - 1 && index >= 0)
        {
            deletion(arr, size, index); // Calling Deletion function
            size -= 1;                  // Decrease the size of array after deleting the element
            cout << "After Deletion : " << endl;
            traversal(arr, size);
        }
        else
        {
            cout << "Element Cannot be deleted as index number is not Valid !" << endl;
        }

        cout << "---------------------------------" << endl;

        //^^^^^%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        traversal(arr, size); // Traverse the array before searching for an element

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  Linear Search Call  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        cout << "\nLINEAR SEARCH OUTPUT: " << endl;
        // Input the element to be searched from the user in the array
        int key;
        cout << "Enter element you want to search in the array:\n";
        cin >> key;

        // Calling the Linear search function
        linearSearch(arr, key, size);

        cout << "---------------------------------" << endl;

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        traversal(arr, size); // Traverse the array before searching for an element

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  Binary Search Call  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

        cout << "\nBINARY SEARCH OUTPUT: " << endl;
        cout << "\n** PLEASE NOTE THAT BINARY SEARCH WILL ONLY WORK FOR SORTED ARRAY :)**\n"
             << endl;
        // Input the element to be searched from the user
        cout << "Enter element to be Searched: ";
        cin >> key;

        // Calling the Binary Search function
        binarySearch(arr, key, size);

        cout << "---------------------------------" << endl;

        //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    }
    // If size of the array is more than its capacity
    else
    {
        cout << "Size is more than Capacity" << endl;
    }

    return 0;
}
//*******************************************************  END OF THE PROGRAM  ********************************************************************************

//------------------------------------------------------------ ! ! THANK YOU ! ! ------------------------------------------------------------------------------
