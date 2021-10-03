// The problem is to count frequencies of all elements in an array in O(n) time complexity

#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}
// driver code
int main()
{
    int n;
    cout<<"Enter the number of Elements in an array = ";
    cin >> n;
    int arr[n+1];
    //Inserting an array 1 2 2 4 5 4
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    countFreq(arr, n);
    return 0;
}
