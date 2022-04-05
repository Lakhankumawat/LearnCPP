// An LCS based program to find minimum number
// insertions needed to make a string palindrome
#include <bits/stdc++.h>
using namespace std;


// Returns length of LCS for X[0..m-1], Y[0..n-1].
int lcs( string X, string Y, int m, int n )
{
	int L[m+1][n+1];
	int i, j;
	
	/* Following steps build L[m+1][n+1] in bottom
		up fashion.  */
	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
		if (i == 0 || j == 0)
			L[i][j] = 0;
	
		else if (X[i - 1] == Y[j - 1])
			L[i][j] = L[i - 1][j - 1] + 1;
	
		else
			L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}
	
	/* L[m][n] contains length of LCS for X[0..n-1]
		and Y[0..m-1] */
	return L[m][n];
}

void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// LCS based function to find minimum number of
// insertions
int findMinInsertionsLCS(string str, int n)
{
	// Create another string to store reverse of 'str'
	string rev = "";
	rev = str;
	reverseStr(rev);
	
	// The output is length of string minus length of lcs of
	// str and it reverse
	return (n - lcs(str, rev, n, n));
}

// Driver code
int main()
{
	string str;
	cout<<"Enter string"<<endl;
	cin>>str;
	cout << findMinInsertionsLCS(str, str.length());
	return 0;
}
