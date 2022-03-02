
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int **constructSubArray(int n, int **arr, int i, int j)
{
    if (n == 0)
        return NULL;
    int **newArray = new int *[n];
    for (int i = 0; i < n; i++)
    {
        newArray[i] = new int[n];
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            newArray[x][y] = arr[x + i][y + j];
        }
    }
    return newArray;
}

int **matrixAdd(int **arr1, int **arr2, int n)
{
    int **res = new int *[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    return res;
}

int **matrixSub(int **arr1, int **arr2, int n)
{
    int **res = new int *[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    return res;
}

int **strassenMultiply(int n, int **arr1, int **arr2)
{
    int **res = new int *[n];
    for (int i = 0; i < n; i++)
    {
        res[i] = new int[n];
    }
    if (n == 1)
    {
        res[0][0] = arr1[0][0] * arr2[0][0];
        return res;
    }
    int **a = constructSubArray(n / 2, arr1, 0, 0);
    int **b = constructSubArray(n / 2, arr1, 0, n / 2);
    int **c = constructSubArray(n / 2, arr1, n / 2, 0);
    int **d = constructSubArray(n / 2, arr1, n / 2, n / 2);
    int **e = constructSubArray(n / 2, arr2, 0, 0);
    int **f = constructSubArray(n / 2, arr2, 0, n / 2);
    int **g = constructSubArray(n / 2, arr2, n / 2, 0);
    int **h = constructSubArray(n / 2, arr2, n / 2, n / 2);

    int **p1 = strassenMultiply(n / 2, (matrixAdd(a, c, n / 2)), (matrixAdd(e, f, n / 2))); // (a+c)x(e+f)
    int **p2 = strassenMultiply(n / 2, (matrixAdd(b, d, n / 2)), (matrixAdd(g, h, n / 2))); // (b+d)x(g+h)
    int **p3 = strassenMultiply(n / 2, (matrixSub(a, d, n / 2)), (matrixAdd(e, h, n / 2))); // (a-d)x(e+h)
    int **p4 = strassenMultiply(n / 2, a, (matrixSub(f, h, n / 2)));                        // (a)x(f-h)
    int **p5 = strassenMultiply(n / 2, (matrixAdd(c, d, n / 2)), e);                        // (c+d)x(e)
    int **p6 = strassenMultiply(n / 2, (matrixAdd(a, b, n / 2)), h);                        // (a+b)x(h)
    int **p7 = strassenMultiply(n / 2, d, (matrixSub(g, e, n / 2)));                        // (d)x(g-e)

    // I:=M2+M3−M6−M7
    // J:=M4+M6
    // K:=M5+M7
    // L:=M1−M3−M4−M5

    int **I = matrixSub(matrixSub(matrixAdd(p2, p3, n / 2), p6, n / 2), p7, n / 2);
    int **J = matrixAdd(p4, p6, n / 2);
    int **K = matrixAdd(p5, p7, n / 2);
    int **L = matrixSub(matrixSub(matrixSub(p1, p3, n / 2), p4, n / 2), p5, n / 2);

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            res[i][j] = I[i][j];
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            res[i][j + n / 2] = J[i][j];
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            res[i + n / 2][j] = K[i][j];
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            res[i + n / 2][j + n / 2] = L[i][j];
        }
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // generate random numbers for matrix row and coloumn value
    int randomnumber1, randomnumber2;
    cout<<endl<<"Enter N of N*N matrix:"<<endl;
    int n;
    int temp;
    cin >> n;
    int **arr1 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = new int[n];
    }
    int **arr2 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i] = new int[n];
    }
    cout << "\n"
         << "1st matrix is"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            randomnumber1 = (rand() % 9) + 1;
            arr1[i][j] = randomnumber1;
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n"
         << "2nd matrix is"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            randomnumber2 = (rand() % 9) + 1;
            arr2[i][j] = randomnumber2;
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n"
         << "Strassen matrix Multiplication"
         << "\n";

    int **res = strassenMultiply(n, arr1, arr2);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
