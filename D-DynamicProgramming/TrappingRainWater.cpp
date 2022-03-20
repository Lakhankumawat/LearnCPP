// Problem Statement: https://leetcode.com/problems/trapping-rain-water/

// C++ program to find maximum amount of water that can
// be trapped within given set of bars.
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int findWater(int arr[], int n)
{
	// initialize output
	int result = 0;

	// maximum element on left and right
	int left_max = 0, right_max = 0;

	// indices to traverse the array
	int lo = 0, hi = n - 1;

	while (lo <= hi) {
		if (arr[lo] < arr[hi]) {
			if (arr[lo] > left_max)
				// update max in left
				left_max = arr[lo];
			else
				// water on curr element = max - curr
				result += left_max - arr[lo];
			lo++;
		}
		else {
			if (arr[hi] > right_max)
				// update right maximum
				right_max = arr[hi];
			else
				result += right_max - arr[hi];
			hi--;
		}
	}

	return result;
}

int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n);
}

// Output : Maximum water that can be accumulated is 6.

// Time Complexity : O(n)

// Space Complexity : O(1)
