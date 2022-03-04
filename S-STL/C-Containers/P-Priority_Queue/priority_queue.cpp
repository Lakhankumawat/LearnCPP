// Priority Queue is a kind of extension of Queue 
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Basic Syntax
    priority_queue<int> queue_one;
    // push() function is used to add element in the container
    queue_one.push(1);
    queue_one.push(4);
    queue_one.push(3);
    queue_one.push(2);


    //Printing all the elements of the Priority Queue
    while(queue_one.empty() == false){
        cout<<queue_one.top()<<" ";
        queue_one.pop();
    }
    //Output -> 4 3 2 1 


    // Priority Queue is built in such a way that the elements in the queue are arranged in descending order
    // All the operations are discussed in "priority_queue_operations.cpp"


    return 0;
}