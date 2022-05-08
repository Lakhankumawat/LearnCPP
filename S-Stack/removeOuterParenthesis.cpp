#include<iostream>
#include<cstring>
#include <bits/stdc++.h>

using namespace std;

// Function to remove outermost parentheses of every primitive string. 
string removeOuterParentheses(string s){
    string sen;

    // Creating a stack
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            if(!st.empty()){
                sen=sen+s[i];
            }
            st.push(s[i]);
        }
        else if(s[i]==')'){
            char top=st.top();
            if(top=='('){
                st.pop();
                if(!st.empty()){
                    sen=sen+s[i];
                }
            }
        }
    }
    return sen;
}


// Driver Code
int main(){
    string s = "(()())(())(()(()))";
    string ans=removeOuterParentheses(s);
    cout<<"After removing outer parentheses of each part, the final string is '"<<ans<<"'"<<endl;
    return 0;
}