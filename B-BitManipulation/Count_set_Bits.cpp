

//------------------------------------PROBLEM : ----------------------------------
#include <bits/stdc++.h>
using namespace std;
#include<list>
//method 1 : slow approach
int countSetBit(unsigned int n){ 
    int ans=0;
    while (n>0)
    {
        ans+=(n&1);
        n=n>>1;
    }
    return ans;
}
//method 2 : fast approach
int countSetBitFast(unsigned int n){
    int ans=0;
    while(n>0){
        n=n&(n-1);
        ans++;
    }
    return ans;
}

int main(){

    unsigned int n = 15;//1111
    cout<<countSetBit(n)<<" slow"<<endl;
    
    cout<<countSetBitFast(n)<<" fast"<<endl;
    
    cout<<__builtin_popcount(n)<<" inbuilt"<<endl;

}
