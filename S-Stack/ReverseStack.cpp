/*                         REVERSE A STACK USING RECUSRION 
Time Complexity : O(N^2)
Space Complexity : O(N) which is the recursive stack space */

#include<bits/stdc++.h>
using namespace std;
 
// GLOBAL DECLARATION
stack<char> st;
string ans;
 
//function that inserts an element into stack.
void insert(char x)
{
 
    if(st.size() == 0) st.push(x);
 
    else
    {   //take out the topmost element, pop it and recursively call the function
        char a = st.top();
        st.pop();
        insert(x);
 
    
        // when inserted at the bottom then push items in stack
        st.push(a);
    }
}
 
// function that reverses the given stack 
void reverse()
{
    if(st.size()>0)
    {
         
        // Hold all items in stack until we reach its end 
        char x = st.top();
        st.pop();
        reverse();
         
        // call the function for inserting
        insert(x);
    }
}
 

int main()
{
     
    // push elements into the stack
    st.push('3');
    st.push('2');
    st.push('1');
    st.push('7');
     
    cout<<"Previous Stack\n";
     
    // print the old elements
    cout<<"3"<<" "<<"2"<<" "<<"1"<<" "<<"7"<<endl;
     
    
    reverse();   //functioncall
    cout<<"Reversed Stack\n";
        
     
    // keep storing values of reversed stack into string till stack is not empty
    while(!st.empty())
    { 
        char x=st.top();
        st.pop();
        ans+=x;
    }
     
    //print the new stack
    cout<<ans[3]<<" "<<ans[2]<<" "<<ans[1]<<" "<<ans[0]<<endl;
    return 0;
}
 