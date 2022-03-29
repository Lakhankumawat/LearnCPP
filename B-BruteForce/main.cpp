#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,result=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1])
            result++;
    }
    cout<<result;
    return 0;;
}

