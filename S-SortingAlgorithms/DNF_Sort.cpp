#include <iostream>
using namespace std;

void Swap(int a[], int i, int j) // Swapping the numbers
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void DNF_Sort(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1; // Initializing low , mid and high pointer

    while (mid <= high)
    {
        if (a[mid] == 0)  // If mid element is zero we swap low and mid one as we want to sort.
        {
            Swap(a, mid, low);
            low++;        // Increasing low pointer
            mid++;        // Increasing mid pointer
        }
        else if (a[mid] == 1) // If mid element is one we simple increament mid as its in right position.
        {
            mid++;        // Increasing mid pointer
        }
        else
        {
            Swap(a, mid, high); // If mid element is two we swap mid and high one as we want to sort.
            high--;      // Decreasing high pointer
        }
    }
}

int main()
{
    int a[] = {0, 1, 2, 0, 0, 1, 2, 2};
    int n = (sizeof(a)) / (sizeof(a[0]));

    cout << "Before DNF Sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    DNF_Sort(a, n);

    cout << "\n\nAfter DNF Sorting : \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

/*
Output :-
Before DNF Sorting :
0 1 2 0 0 1 2 2

After DNF Sorting :
0 0 0 1 1 2 2 2
*/
