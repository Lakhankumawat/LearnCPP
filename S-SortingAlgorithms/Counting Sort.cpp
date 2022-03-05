
/*------------------------COUNTING SORT------------------------*/
/*Inventor: Salah Ashraf
Space complexity: O(K)
Time complexity: O(N+K)
Worst Case : when range is large
Average Case : When all elements are nearly equal
Best Case : when all elements are the same
Where : N is the number of elements and K is the difference between maximum element and minimum element
  -----------------------------*/
#include <iostream>
using namespace std;

void countingSort(int arr[], int n)
{
    int mx = INT32_MIN, mn = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }
    int range = mx - mn + 1;
    int freq[range] = {};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - mn]++;
    }
    int j = 0;
    for (int i = mn; i <= mx; i++)
    {
        while (freq[i - mn]--)
        {
            arr[j++] = i;
        }
    }
}

int main()
{
    int arr[] = {4, 5, 6, 7, 2, 69, 78, 0, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    cout << "Array After sorting using counting sort : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}