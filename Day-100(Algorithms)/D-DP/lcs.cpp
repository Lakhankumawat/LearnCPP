#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b);

int lcs(char *firstString, char *secondString, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (firstString[m - 1] == secondString[n - 1])
        return 1 + lcs(firstString, secondString, m - 1, n - 1);
    else
        return max(lcs(firstString, secondString, m, n - 1), lcs(firstString, secondString, m - 1, n));
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    char firstString[] = "APPLE";
    char secondString[] = "RIPPLE";

    int m = strlen(firstString);
    int n = strlen(secondString);

    cout<<"\nStrings taken are "<<firstString<<" and "<<secondString;
    printf("\n\nLength of LCS is %d\n", lcs(firstString, secondString, m, n));
    return 0;
}
