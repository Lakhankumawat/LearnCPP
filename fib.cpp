#include <iostream>
typedef long long ll;
using namespace std;

int fib(int);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    cout << fib(n+1) << endl;
    return 0;
}
int fib(int s)
{
    ll x = 0, y = 1, a[s];
    a[0] = 0;
    for(ll i = 1; i < s; i++)
    {
        ll tmp = x;
        x = y;
        y = tmp + y;
        a[i] = x;
        a[i+1] = y;
    }
    return a[s-1];
}