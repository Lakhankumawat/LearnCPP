// Dequeue or Doubly Ended Queue are a special case of Queue in which insertion/deletion can be done from both ends

#include<iostream>
#include<deque>
using namespace std;

// Function to print the elements of the Container
void display(deque<int> queue_name){
    for(int i:queue_name)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    // Basic Syntax -> deque<data_type> name;
    deque<int> deque_one;

    // push_front() is used to add element at the front
    deque_one.push_front(2);
    deque_one.push_front(3);
    display(deque_one); // Output -> 3 2 

    deque_one.push_back(1);
    display(deque_one); // Output -> 3 2 1

    deque_one.pop_front();
    display(deque_one); // Output -> 2 1

    deque_one.pop_back();
    display(deque_one); // Output -> 2

    // All the operations of Deque are discussed in "dequeue_operations.cpp"

    

    return 0;
}