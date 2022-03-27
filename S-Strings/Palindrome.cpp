#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str, reversed_str;
    cout<<"Please enter the string to check if it is palindrome or not:";
    cin>>reversed_str;
    str = reversed_str;
    reverse(reversed_str.begin(),reversed_str.end());
    if (str == reversed_str)
    {
        cout<<"True";   
    }
    else{
        cout<<"False";
    }
} 