
#include<queue>
#include<iostream>
using namespace std;

int main(){

/* priority Queue are included in queue header file */

/*priority_queue<int> pq; */ //max priority queue - Print in descending order
priority_queue<int,vector<int>,greater<int> > pq; //min priority queue -ascending order
int n,no;
cin>>n;


for(int i=1;i<=n;i++)
    pq.push(i); //O(logn) to insert an element in pq


    //Higher no has high priority over here
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

return 0;
}


