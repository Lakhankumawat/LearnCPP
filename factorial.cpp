#include <bits/stdc++.h>
#define  ll long long
using namespace std;
unsigned ll factorial(ll num);
int main(){
     ll n;
    cin >> n;
    cout << factorial(n) << endl ;
}
unsigned ll factorial(ll num ){
    if( num == 1){
        return 1;
    }
    return num * factorial(num-1);
}
