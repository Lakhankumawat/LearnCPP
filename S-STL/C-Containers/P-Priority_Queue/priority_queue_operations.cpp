#include<iostream>
#include<queue>
using namespace std;

// Function to display all the elements of Queue
void displayQueue(priority_queue<int> queue_name)
{
    while(queue_name.empty() == false){
        cout<<queue_name.top()<<" ";
        queue_name.pop();
    }
    cout<<endl;
}

int main()
{
    priority_queue<int> queue_one;

    //push() function is used to add element in the container
    queue_one.push(5);
    queue_one.push(1);
    queue_one.push(4);
    queue_one.push(2);
    queue_one.push(3);

    displayQueue(queue_one);
    // Output -> 5 4 3 2 1 


    //pop() function is used to delete the first element i.e the greatest element of the queue.
    queue_one.pop();
    displayQueue(queue_one);
    // Output -> 4 3 2 1


    // top() function is used to display the first i.e the greates element in the Priority Queue 
    cout<<queue_one.top()<<endl;
    // Output -> 4


    // size() function is used to find the size of the queue
    cout<<queue_one.size()<<endl;
    // Output -> 4


    // empty() function is used to check if the queue is empty or not
    if(queue_one.empty() ==  true){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    // Output -> Queue is not empty


    // swap() function is used to interchange the elements of two priority queue of same data types (size may vary)
    priority_queue<int> queue_two;
    queue_two.push(8); queue_two.push(7); queue_two.push(9);
    
    queue_one.swap(queue_two);
    cout<<"Elements of queue_one after swap is: ";
    displayQueue(queue_one); // Output -> Elements of queue_one after swap is: 9 8 7

    cout<<"Elements of queue_two after swap is: ";
    displayQueue(queue_two); // Output -> Elements of queue_two after swap is: 4 3 2 1


    // emplace() is used to insert element in the container without making the copy of the value passed as the parameter
    queue_one.emplace(10);
    displayQueue(queue_one);
    // Output -> 10 9 8 7





    return 0;
}