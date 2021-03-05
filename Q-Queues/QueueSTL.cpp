
#include<queue>
#include<iostream>
using namespace std;

int main(){

queue<int> Q;

for(int i=1;i<=5;i++)
    Q.push(i);

    while(!Q.empty()){

        cout<<Q.front()<<" ";
        Q.pop();

    }

return 0;
}


