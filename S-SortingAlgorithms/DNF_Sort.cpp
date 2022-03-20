#include <iostream>
using namespace std;

void Swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void DNF_Sort(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            Swap(a, mid, low);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            Swap(a, mid, high);
            high--;
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
