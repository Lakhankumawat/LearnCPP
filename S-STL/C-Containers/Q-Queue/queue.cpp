#include<iostream>
#include<queue> // Library needs to be included

using namespace std;

int main()
{
    // Basic Syntax -> queue<int> queue_name;
    queue<int> queue_one;

    // push() function is used to add the element at the end;
    queue_one.push(1); 
    queue_one.push(2);
    queue_one.push(3);
    queue_one.push(4); // Container -> [ 1| 2 | 3 | 4 | ]


    // pop() function is used to delete element from the front of the container
    queue_one.pop(); // Container -> [ 2 | 3  | 4 | ]


    // Printing the element of the container
    while(queue_one.empty() ==  false) // empty() function is used to check if the container is empty or not
    {
        cout<<queue_one.front()<<" "; // front() function is used to print the front element or first entered element of the container
        queue_one.pop();
    }
    //Output -> 2 3 4 

    // All the operations of queue along with empty() and front() functions are discussed in "queue_operation.cpp"


    return 0;
}