#include<iostream>
using namespace std;
int main() {
    int x,s,f;
    cin >> x >> s>>f;
    if(x*s < f) cout << x*s;
    else cout << f;
return 0;
}