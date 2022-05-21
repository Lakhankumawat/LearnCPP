#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long price;
    double discountedPrice;
    long long discount;
    cin>>price>>discount;
    double ans = discount*price*0.01;
    discountedPrice=double(price)-ans;
    cout<<discountedPrice<<endl;
    return 0;
}