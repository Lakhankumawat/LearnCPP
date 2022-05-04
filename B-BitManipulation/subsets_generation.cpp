/**
* Algorithm that uses bit masking to generate all possible subsets (Power Set) from a given array of any data type.
* Time Complexity: O(N*2^N)
* Space Comlpexity: O(N * N)
*/

#include <bits/stdc++.h>
using namespace std;

template<class T>
vector<vector<T>> subsets(vector<T> arr) {

	int s = arr.size();
	vector<vector<T>>res((1 << s));
	for (int mask = 0; mask < (1 << s); mask++)
	{
		for (int i = 0; i < s; i++) {
			if ((mask >> i) & 1)// is the i-th bit of this mask 1?
				res[mask].push_back(arr[i]);
		}
	}
	return res;
}

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

	vector<vector<int>>res1;
	vector<vector<char>>res2;


	// Test 1 
	res1 = subsets<int>({ 1, 2, 3 });
	printVec(res1);

	cout << "\n-----------------------------------------\n";

	// Test 2
	res2 = subsets<char>({ 'a', 'b', 'c' });
	printVec(res2);


	return 0;
}