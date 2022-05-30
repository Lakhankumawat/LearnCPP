#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int interpolationSearch(int a[], int n, int key)
{
    int start = 0, end = n - 1;

    while (start <= end && key >= a[start] && key <= a[end])
    {
        if (start == end)
        {
            if (a[start] == key)
                return start;
            else
            {
                return -1;
            }
        }
        // Probing the position with keeping
        // uniform distribution in mind.
        int pos = start + (((double)(end - start) /
                            (a[end] - a[start])) *
                           (key - a[start]));

        // Condition of target found
        if (a[pos] == key)
            return pos;

        // If x is larger, x is in upper part
        if (a[pos] < key)
            start = pos + 1;

        // If x is smaller, x is in the startwer part
        else
            end = pos - 1;
    }
    return -1;
}

int main()

{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    printf("\n Enter the size of array : ");
    int n;
    cin >> n;
    int a[n];

    printf("\n Enter the array : ");
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printf("\n Enter the Element to be searched : ");
    int key;
    cin >> key;

    int index = interpolationSearch(a, n, key);

    if (index != -1)
    {
        cout << "\n Element Found at Position: " << index + 1 << "\n";
    }
    else
    {
        cout << "Element not found ";
    }

    return 0;
}
