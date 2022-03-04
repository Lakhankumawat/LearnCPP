
#include<queue>
#include<iostream>
using namespace std;

int main(){

/* priority Queue are included in queue header file */
    
    /*By default priority queue holds data in descending order so for holding data in ascending order we have to initialise priority queue
    like this-->priority_queue<int,vector<int>,greater<int> > pq;*/
    

/*priority_queue<int> pq; */ //max priority queue - Print in descending order
priority_queue<int,vector<int>,greater<int> > pq; //min priority queue -ascending order
int n,no;  //declaring variables of integer (int) type
cin>>n;      //taking inputs


for(int i=1;i<=n;i++)
    pq.push(i); //O(logn) to insert an element in pq


    //Higher no has high priority over here
    while(!pq.empty()){
        cout<<pq.top()<<" ";        //printing pq-> top element
        pq.pop();                   //popping out the top element from pq
    }

return 0;
}


