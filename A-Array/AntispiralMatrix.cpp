// Header file
#include <bits/stdc++.h>

using namespace std;

// Driver Code
int main()
{
    //Inputs
    int R, C;
    cin >> R >> C;

    int mat[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> mat[i][j];
        }
    }

    int i, k = 0, l = 0;
    int m = R - 1, n = C - 1;

    stack<int> stk;

    //    k - starting row index
    //     m - ending row index
    //     l - starting column index
    //     n - ending column index
    //     i - iterator  

    while (k <= m && l <= n)
    {

        for (i = l; i <= n; ++i)
            stk.push(mat[k][i]);   // First Row
        k++;

        for (i = k; i <= m; ++i)
            stk.push(mat[i][n]);  //Last column
        n--;

        if (k <= m)  //Last Row
        {
            for (i = n; i >= l; --i)
                stk.push(mat[m][i]);
            m--;
        }

        if (l <= n)   //First column
        {
            for (i = m; i >= k; --i)
                stk.push(mat[i][l]);
            l++;
        }
    }

    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}
