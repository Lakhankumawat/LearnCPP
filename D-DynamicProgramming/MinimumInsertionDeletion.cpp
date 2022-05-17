// Header File
#include <bits/stdc++.h>

using namespace std;

// LCS function to find the length of longest common subsequence in two strings
// str1 and str2
int lcs(string str1, string str2, int m, int n)
{
	int L[m + 1][n + 1];
	int i, j;

	for (i = 0; i <= m; i++) {
		for (j = 0; j <= n; j++) {
			if (i == 0 || j == 0)
				L[i][j] = 0;

			else if (str1.at(i - 1) == str2.at(j - 1))
				L[i][j] = L[i - 1][j - 1] + 1;

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}
		// L[m][n] contains the length 
		// of the LCS of the tw strings
	return L[m][n];
}

// Function to print the output
// and find the Total number of insertions and total number of deletions
void printMinDelAndInsert(string str1, string str2)
{
	int m = str1.size();
	int n = str2.size();

	int len = lcs(str1, str2, m, n);

	cout << "Minimum number of deletions = " << (m - len)
		<< endl;

	cout << "Minimum number of insertions = " << (n - len)
		<< endl;
}

//Driver Code
int main()
{
	string str1 ;
	string str2;
	// Inputs
    cout<<"Enter string 1: ";
    cin>>str1;
    cout<<"Enter string 2: ";
    cin>>str2;
//Calling Function
	printMinDelAndInsert(str1, str2);
	return 0;
}
