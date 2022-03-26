/* Redundant Parenthesis code */
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<< "Enter the string:"<<endl;  // Input string
    string s;
    cin >> s;
    stack<char> st;    // stack created
    bool ans = false;

    for(int i=0;i<s.size();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/'){
            st.push(s[i]);      // push the operators in the stack
        }else if(s[i]=='('){
            st.push(s[i]);      // push '(' in the stack
        }else if(s[i]==')'){
            if(st.top() == '('){
                ans = true;
            }
            while(st.top() == '+' or st.top() == '-' or st.top() == '*' or st.top() == '/'){
                st.pop();      // pop the operators until '(' is found
            }
            st.pop();
        }
    }

    if(ans){
        cout<<"True";        // if redundant
    }else{
        cout<<"False";       // if not redundant
    }
}



/*
Input: 
((a+b))
(a+(b)/c)
(a+b*(c-d))
Output: 
Yes
Yes
No

Explanation:
1. ((a+b)) can reduced to (a+b), this Redundant
2. (a+(b)/c) can reduced to (a+b/c) because b is
surrounded by () which is redundant.
3. (a+b*(c-d)) doesn't have any redundant or multiple
brackets.
*/