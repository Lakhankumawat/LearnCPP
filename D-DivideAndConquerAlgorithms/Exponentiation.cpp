
/*----------------------------------------X^N---------------------------------------*/
/*-------------------------Time Complexity : O(log(n))-,-Space : O(1) ---------------------------*/
#include<bits/stdc++.h>
using namespace std;

double expo(double x,int n)
{
    if(n==0)
        return 1;
    double temp = expo(x,n/2);
    if(n%2==0)
        return temp*temp;
    else{
        if(n>0)
            return temp*temp*x;
        else
            return temp*temp/x;
    }
}

/*
        Input : Read two numbers x , n
        output: x^n
*/
int main()
{
    double x;
    int n;
    cin >> x >> n;
    cout << expo(x,n);
}
