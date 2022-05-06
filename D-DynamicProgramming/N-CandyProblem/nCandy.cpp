/* we are given n candys and there are n persons and we have to distribute them among each person

we have a like array P1,P2,P3 and C1,C2,C3 to store who likes which candies

Find out the number of ways to distribute n candies among n persons
LIKE ARRAY

    C1 C2 C3
P1   1  1  1
P2   1  0  1
P3   1  1  1

This takes  O(N!)

Thus we need Bit Masking



 */

#include <bits/stdc++.h>
using namespace std;

long long solve(int like[3][3], int N) // N is the number of candies
{
    long long dp[(1 << N)];
    // No candy is assigned to anyone
    dp[(1 << N) - 1] = 1; // all candies are assigned to everyone

    for (int mask = (1 << N) - 2; mask >= 0; mask--) // for each mask
    {
        // count set bits

        int temp = mask; // temp is the mask
        int k = 0;
        while (temp > 0)
        {
            int lastbit = temp & 1; // last bit is 1
            k += lastbit;           // k is the number of set bits
            temp /= 2;              // temp is the mask
        }

        for (int i = 0; i < N; i++)
        {
            if (like[k][i] && !(mask & (1 << i))) // if the person i likes the candy and the candy is not assigned to him
            {
                dp[mask] += dp[mask | (1 << i)]; // assign the candy to the person i
            }
        }
    }

    return dp[0];
}

int main()
{
    int like[3][3] = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    cout << solve(like, 3) << endl;
    return 0;
}