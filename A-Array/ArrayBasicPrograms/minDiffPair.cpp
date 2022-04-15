// C++ implementation of simple method to find
// minimum difference between any pair
#include <bits/stdc++.h>
using namespace std;

int minDiffPair()
{
    int n;
    cin >> n;
int arr[n]; //{1, 5, 3, 19, 18, 25};
 for(int i = 0; i < n; i++){
     cin >> arr[i];
 }
 int diff = INT_MAX;

// Find the min diff by comparing difference
// of all possible pairs in given array
for (int i=0; i<n-1; i++)
	for (int j=i+1; j<n; j++)
		if (abs(arr[i] - arr[j]) < diff)
				diff = abs(arr[i] - arr[j]);
cout << "Minimum difference is " << diff;
return 0;
}
