#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

double myPow_h(double x, int n){
    if (n==0){
        //if value of n=0 then return 1
        return 1;
    }
    double m=myPow_h(x,n/2); // call the function recurrsivly
    if(n%2==0){
        //
        return m*m; // if n is factor of 2 then return m square
    }
    else{
        return m*m*x; // if not factor of 2 then return m square into x
    }
}

double myPow(double x, int n){
    if (n<0){ // if n is less then 1 it means -ve power on a number or reciprocal of the x^n
      return 1/myPow_h(x,n);
    }
    else{ //otherwise
        return myPow_h(x,n); // otherwise return result
    }
}




int main(){
    cout<<"enter the base number"<<endl;
    double x;
    cin>>x;
    cout<<"enter the power"<<endl;
    int n;
    cin>>n;
    double val=myPow(x,n);
    cout<<"answer : "<<val;
    return 0;
}

//Time complexity: O(log(N))
//Space complexity: O(1)
