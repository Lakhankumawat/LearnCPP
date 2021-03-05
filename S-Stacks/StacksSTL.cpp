

#include<stack>
#include<iostream>
using namespace std;

int main(){

stack<int> s;
//LIFO Principle
for(int i=0;i<5;i++)
    s.push(i+1);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }




return 0;
}

