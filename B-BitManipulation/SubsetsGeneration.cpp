/**
* Algorithm that uses bit masking to generate all possible subsets (Power Set) from a given array of any data type.
* Time Complexity: O(N*2^N)
* Space Comlpexity: O(N * N)
*/

#include <bits/stdc++.h>
using namespace std;

// Subsets function with template<class T> to take any data type.
template<class T>
vector<vector<T>> subsets(vector<T> arr) {

	int s = arr.size();
	vector<vector<T>>res((1 << s));  // create result vector with size = (1<<s)--> 2^(array.size())
	for (int mask = 0; mask < (1 << s); mask++) // Loop on 2^(array.size()) 
	{
		// Loop on array size to check if each i of the current mask is 1 or not.
		for (int i = 0; i < s; i++) {
			if ((mask >> i) & 1) // is the i-th bit of this mask 1?
				res[mask].push_back(arr[i]); // if ith bit of this mask is 1 then push array element in index i in result vector.
		}
	}
	return res;
}

// Function to print 2D vector (result vector for subsets)
template<class T>
void printVec(vector<vector<T>> vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << '{';
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j];
			if (j != vec[i].size() - 1)
				cout << ", ";
		}
		cout << "}\n";
	}
}

int main() {

	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	// Test 1 
	vector<vector<int>>res1;
	res1 = subsets<int>({ 1, 2, 3 });
	printVec(res1);

	cout << "\n-----------------------------------------\n";

	// Test 2
	vector<vector<char>>res2;
	res2 = subsets<char>({ 'a', 'b', 'c' });
	printVec(res2);


	return 0;
}