// Sieve of Eratosthenes is a simple and ancient algorithm used to find the prime numbers up to any given limit. It is one of the most efficient ways to find small prime numbers.

// more info : https://www.geeksforgeeks.org/sieve-of-eratosthenes/
#include<iostream>
#include<vector>
using namespace std;


vector<int> sieveOfEratosthenes(int n)
{
    vector<bool> temp(n + 1, 0);

    for (int z = 2; z * z < n;z++)
    {
        if(!temp[z])
        {
            for (int y = 2*z; y < n; y += z)
            {
                temp[y] = 1;
            }
        }
    }
    int c = 0,y=0;
    vector<int> prime;
    for (int z = 2; z < n;z++)
    {
        if(!temp[z])
        {
            prime.push_back(z);
            c++;
        }
    }
    return prime;
}

int main()
{
    int n;
    cin >> n;

    vector<int> prime=sieveOfEratosthenes(n);

    for (int z = 0; z < prime.size();z++)
    {
        cout << prime[z] << " ";
    }
    return 0;
}