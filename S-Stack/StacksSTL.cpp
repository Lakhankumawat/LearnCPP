#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    // to push an element into the stack
    for(int i=0;i<5;i++)
    s.push(i+1);

    // to pop an element from the stack till it becomes empty
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }




return 0;
}

