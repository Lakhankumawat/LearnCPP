#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void Intersection_array(int a[], int b[], int n, int m)
{
    int i = 0, j = 0; // Initialize the pointers with zero

    while (i < n && j < m)
    {
        if (a[i] == b[j]) // if equal we found one element to be added in our intersection set
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if (a[i] < b[j]) // If element in array a is less than array b element then we increase i pointer.
        {
            i++;
        }
        else // If element in array b is less than array a element then we increase j pointer.
        {

            j++;
        }
    }
}

int main()

{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int n, m;
    printf("\n\nEnter the size of array A : ");
    cin >> n;
    printf("\nEnter the size of array B : ");
    cin >> m;
    int a[n], b[m];
    printf("\n\nEnter array A : ");
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printf("\nEnter array B : ");
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // Sorting the both array in ascending order.
    sort(a, a + n);
    sort(b, b + m);

    cout << "\n\nThe intersection of array is : ";
    Intersection_array(a, b, n, m);
    cout << "\n\n";

    return 0;
}
