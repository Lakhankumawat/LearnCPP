#include <iostream>
#include <vector>
using namespace std;
vector<int> *make_sieve()
{
    bool isprime[100001];
    for (int i = 0; i < 100001; i++)
    {
        isprime[i] = true;
    }
    for (int i = 2; i * i < 100001; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j < 100001; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    vector<int> *primes = new vector<int>();
    primes->push_back(2);
    for (int i = 3; i < 100001; i += 2)
    {
        if (isprime[i])
        {
            primes->push_back(i);
        }
    }
    return primes;
}
void print_primes(long long left, long long right, vector<int> *&primes)
{
    bool *isprime = new bool[right - left + 1];
    for (int i = 0; i <= right - left; i++)
    {
        isprime[i] = true;
    }
    for (int i = 0; primes->at(i) * (long long)primes->at(i) <= right; i++)
    {
        int current_prime = primes->at(i);
        //just smaller or equal value to l
        long long base = (left / current_prime) * current_prime;
        if (base < left)
        {
            base += current_prime;
        }
        //mark all multiples within left to right as false
        for (long long j = base; j <= right; j += current_prime)
        {
            isprime[j - left] = false;
        }
        // there may be a case where base is itself a prime number.
        if (base == current_prime)
        {
            isprime[base - left] = true;
        }
    }
    for (int i = 0; i <= right - left; i++)
    {
        if (isprime[i])
        {
            cout << i + left << endl;
        }
    }
}
int main()
{
    vector<int> *primes = make_sieve();
    int t;
    cin >> t;
    while (t--)
    {
        long long left, right;
        cin >> left >> right;
        print_primes(left, right, primes);
    }
}