#include<iostream>
#include<cstring>
#include <bits/stdc++.h>

using namespace std;

// Function to find maximum nesting depth of parentheses
int maxDepth(string s){
    int count=0;
    int max=0;
    stack<char>st;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='('){
            st.push(s[i]);
            count++;
        }
        else if(s[i]==')'){
            st.pop();
            count--;
        }
        if(count>max){
            max=count;
        }
    }
    return max;

}

int main(){
    string s="(1)+((2))+(((3)))";
    int depth=maxDepth(s);
    cout<<"The maximum nesting depth of the string is "<<depth<<endl;
    return 0;
}