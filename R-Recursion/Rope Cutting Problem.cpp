#include <iostream>
using namespace std;
// function for determining maximum of three
int max(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
// recursive function for determiing maximum no. of pieces
int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res = max(maxPieces(n - a, a, b, c), maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c)) + 1;
    if (res == -1)
        return -1;
    return res;
}

int main()
{
    int ropeLength, possibleLength1, possibleLength2, possibleLength3;
    cin >> ropeLength >> possibleLength1 >> possibleLength2 >> possibleLength3;
    cout << maxPieces(ropeLength, possibleLength1, possibleLength2, possibleLength3);
    return 0;
}
