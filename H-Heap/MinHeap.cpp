// Implementation of MinHeap with Insertion and Deletion.
#include <iostream>
using namespace std;
int n;
void printArray(int arr[])
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

void insert(int arr[], int num, int loc)
{
    int par;
    while (loc > 0)
    {
        par = (loc - 1) / 2;
        if (num <= arr[par])
        {
            arr[loc] = num;
            return;
        }
        arr[loc] = arr[par];
        loc = par;
    }      
    arr[0] = num; 
} 

void del(int arr[], int num)
{
    int left, right, i, temp, par;

    for (i = 0; i < n; i++)
    {
        if (num == arr[i])
            break;
    }
    if (num != arr[i])
    {
        cout << num;
        return;
    }
    arr[i] = arr[n - 1];
    n = n - 1;
    par = (i - 1) / 2; 
    if (arr[i] > arr[par])
    {
        insert(arr, arr[i], i);
        return;
    }
    left = 2 * i + 1; 
    right = 2 * i + 2; 
    while (right < n)
    {
        if (arr[i] >= arr[left] && arr[i] >= arr[right])
            return;
        if (arr[right] <= arr[left])
        {
            temp = arr[i];
            arr[i] = arr[left];
            arr[left] = temp;
            i = left;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[right];
            arr[right] = temp;
            i = right;
        }
        left = 2 * i + 1;
        right = 2 * i + 2;
    }                                        
    if (left == n - 1 && arr[i] < arr[left])     {
        temp = arr[i];
        arr[i] = arr[left];
        arr[left] = temp;
    }
} 

int main()
{
    cout << "Enter the size of array:\n";
    cin >> n;
    cout << "Enter the elements of the array:\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int choice, num;
    int k = 0; 
    while (choice!=4)
    {
        cout << "1.Insert\n";
        cout << "2.Delete\n";
        cout << "3.Display\n";
        cout << "4.Quit\n";
        cout << "Enter your choice :";

        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the number to be inserted:";
            cin >> num;
            insert(arr, num, k);
            n = n + 1;
            break;
        case 2:
            cout << "Enter the number to be deleted :";
            cin >> num;
            del(arr, num);
            break;
        case 3:
            printArray(arr);
            break;
        case 4:
            break;
        default:
            cout << "Wrong choice\n";
        }
    }
}
