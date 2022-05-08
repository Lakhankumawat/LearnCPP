
#include<bits/stdc++.h>
using namespace std;

int to_print (int a[], int n);
void word_wrap (int ws[], int n, int w);


/*-------------------------Driver Function---------------------------*/
int main()
{
    int w;
    int n;
    cout<<"\n Enter the width of line: ";
    cin>>w;
    cout<<"\n Enter the number of words you want to feed: ";
    cin>>n;
    int ws[n];
    for(int i=0;i<n;i++){
            cout<<"\n Enter the "<<i+1<<" word: ";
            cin>>ws[i];
    }
    word_wrap (ws, n, w);
    return 0;
}
/*--------------------End Driver Function--------------------------*/


/*--------------------Word wrap function---------------------------*/
   void word_wrap (int ws[], int n, int w)
{
    int e[n+1][n+1], l[n+1][n+1];
    int t[n+1], s[n+1];
    for (int i = 1; i <= n; i++)
    {
        e[i][i] = w - ws[i-1];
        for (int j = i+1; j <= n; j++)
            e[i][j] = e[i][j-1] - ws[j-1] - 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (e[i][j] < 0)
                l[i][j] = INT_MAX;
            else if (j == n && e[i][j] >= 0)
                l[i][j] = 0;
            else
                l[i][j] = e[i][j] * e[i][j];
        }
    }

    t[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        t[i] = INT_MAX;
        for (int j = 1; j <= i; j++)
        {
            if (t[j-1] != INT_MAX && l[j][i] != INT_MAX &&
                           (t[j-1] + l[j][i] < t[i]))
            {
                t[i] = t[j-1] + l[j][i];
                s[i] = j;
            }
        }
    }

    to_print(s, n);
    cout<<endl;
}

/*-------------------To print solution---------------------------*/
int to_print (int a[], int n)
{
    int f;
    if (a[n] == 1)
        f = 1;
    else
        f = to_print(a, a[n]-1) + 1;
    cout<<"\n line "<<f<<"-> word no. "<<a[n]<<" to "<<n;
    return f;
}
