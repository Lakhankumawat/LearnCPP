#include <bits/stdc++.h>
using namespace std;
 vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        for(int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
            {
                r[i][j]=r[i-1][j]+r[i-1][j-1];
            }
        }
        return r;
    }
int main()
{

	int n;
	cin>>n;

	vector<vector<int>> res(n);
     res= generate(n);
    return 0;
}
    