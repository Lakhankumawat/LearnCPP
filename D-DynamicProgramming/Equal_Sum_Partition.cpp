// A Dynamic Programming based
// C++ program to partition problem
#include <bits/stdc++.h>
using namespace std;

//Function Declaration
bool subsetSum(int arr[], int sum, int n);

// Driver Code
int main()
{
    int arr[] = {1,5,11,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    if (sum % 2 != 0)    // Checking if the sum of array is odd
        cout << "false";

    else if (sum % 2 == 0)   // Checking if the sum of the array is even
         subsetSum(arr, sum / 2, n)?cout<<"True":cout<<"False";     

    return 0;
}

// subsetSum function
bool subsetSum(int arr[], int sum, int n)
{
    int t[n + 1][sum + 1];    //Initializing the table
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                t[i][j] = false;   //Initializing the first row as false

            if (j == 0)
                t[i][j] = true;    //Initializing the first column as true
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
                t[i][j] = t[i][j - arr[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    }

    return t[n][sum];   //returning the result
}

/*
Complexity:

Time Complexity: O(sum*n) 

Auxiliary Space: O(sum*n)  

*/