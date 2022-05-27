#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long int

ll CatalanUsingDP(unsigned int n)
{
    // array to sotre results of subproblems
    unsigned long int catalan[n + 1];

    // Initialize first two values in table with 1
    catalan[0] = catalan[1] = 1;

    // Fill entries in catalan[] using recursive formula or we say recursive case condition / intutuion
    for (int i = 2; i <= n; i++)
    {
        catalan[i] = 0;
        for (int j = 0; j < i; j++)
            catalan[i] += catalan[j] * catalan[i - j - 1];
    }

    // At last block we have our ans return that
    return catalan[n];
}

ll CatalanRecursive(unsigned int n)
{
    if (n <= 1)
    {
        return 1;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += CatalanRecursive(i) * CatalanRecursive(n - i - 1);
    }

    return ans;
}

ll BinomialCoefficient(unsigned int n, unsigned int k)
{
    unsigned long int ans = 1;

    // As we know that there is a rule C(n, k) = C(n, n-k)
    if (k > n - k)
    {
        k = n - k;
    }

    // finding the value of [n*(n-1)*---*(n-k+1)] / k*(k-1)*---*1]
    for (int i = 0; i < k; ++i)
    {
        ans *= (n - i);
        ans /= (i + 1);
    }

    return ans;
}

ll BinomialCoefficientMain(unsigned int n)
{
    ll coeff = BinomialCoefficient(2 * n, n);

    return (coeff / (n + 1));
}

int main()

{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    cout << "\n\n First 10 Catalan Number by the Recursive Method : ";
    for (int i = 0; i < 10; i++)
    {
        cout << CatalanRecursive(i) << " ";
    }
    cout << "\n\n First 10 Catalan Number by the Binomial Coefficient Method : ";
    for (int i = 0; i < 10; i++)
    {
        cout << CatalanRecursive(i) << " ";
    }
    cout << "\n\n First 10 Catalan Number by the Dynamic Programming Method : ";
    for (int i = 0; i < 10; i++)
    {
        cout << CatalanUsingDP(i) << " ";
    }

    return 0;
}
