/**
* Algorithm that finds minimum distance between 2 strings, which means the minimum number of insert/delete/substitute while choosing the cost of each operation to transform string 1 to string 2 with minimal cost.
* Time Complexity: O(n * m) where n  and m are strings' lengths
* Space Comlpexity: O(n * m) where n and m are strings' lengths
*/

#include <bits/stdc++.h> 
using namespace std;

int editDistance(string str1, string str2, int I, int D, int S) {
	// n string 1 lentgth, m string 2 length
	int n = str1.length(), m = str2.length();

	// Creating dp 2D vector to store all possible ways and save the minimum cost using Bottom Up Approach
	vector<vector<int>>dp(n + 1, vector<int>(m + 1));

	// Initializing row 0 with deletion cost as row 0 represents word's characters deletion
	for (int i = 0; i <= n; i++)
		dp[i][0] = i * D;

	// Initializing column 0 with I cost as column 0 represents word's characters insertion
	for (int i = 0; i <= m; i++)
		dp[0][i] = i * I;

	// Begin with 1 as row 0 and column 0 are initialized
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			// If the 2 characters are similar then do nothing by taking the previous diagonal value without adding any cost
			if (str1[i - 1] == str2[j - 1])
				dp[i][j] = dp[i - 1][j - 1];

			/*
				If the 2 characters are not similar
				then choose the least cost between: inserting new character by taking the previous col plus insertion cost
												  : deleting the character by taking the previous row plus deletion cost
												  : substituting the character by taking the previous diagonal value plus substition cost
			*/
			else
				dp[i][j] = min((dp[i - 1][j] + D), min((dp[i][j - 1] + I), (dp[i - 1][j - 1] + S)));
		}
	}

	// Print the min possible value from the last element in the constructed matrix
	return dp[n][m];
}

int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int I, D, S;
	string str1, str2;

	cin >> str1 >> str2;
	cin >> I >> D >> S;

	cout << editDistance(str1, str2, I, D, S) << endl;

	return 0;
}